# LXD
## Installation
	# sources:
	# https://wiki.archlinux.org/title/Linux_Containers
	# https://linuxcontainers.org/lxd/getting-started-cli/
	# https://linuxcontainers.org/lxc/getting-started/

	# this requires snap:
	# https://snapcraft.io/docs/installing-snapd

	echo "Installing LXD"
	sudo snap install lxd

	sudo systemctl enable --now lxd.service
	sudo lxc profile set default boot.autostart=false

	echo "Running lxd init"
	echo '' | sudo lxd init --preseed
	
## Usage
sudo lxc launch images:archlinux test0
sudo lxc exec test0 -- bash
sudo lxc exec test0 -- su - fedora
sudo lxc console test0
sudo lxc delete --force test0
lxc image list images:ubuntu
sudo lxc image export ubuntu:20.04

rm -rf snap/lxd
sudo rm -rf /root/snap/lxd
sudo rm -rf /var/lib/lxd
sudo rm -rf /var/lib/lxc
sudo ip link delete lxdbr0

sudo mkdir -p /etc/systemd/system/user@.service.d
cat <<EOF | sudo tee /etc/systemd/system/user@.service.d/delegate.conf
[Service]
Delegate=cpu cpuset io memory pids
EOF
sudo systemctl daemon-reload