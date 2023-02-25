# LXD
## Installation
	# sources:
	# https://linuxcontainers.org/lxd/getting-started-cli/
	# https://linuxcontainers.org/lxd/advanced-guide/
	# https://wiki.archlinux.org/title/Linux_Containers
	# https://wiki.archlinux.org/title/LXD
	
	# https://www.cyberciti.biz/faq/how-to-install-lxd-container-hypervisor-on-ubuntu-16-04-lts-server/

	# this requires snap:
	# https://snapcraft.io/docs/installing-snapd

	echo "Installing LXD"
	sudo snap install lxd

	sudo systemctl enable --now lxd.service
	sudo lxc profile set default boot.autostart=false

	echo "Running lxd init"
	echo '' | sudo lxd init --preseed

## Usage
List image servers
```
lxc remote list
```
List of image servers
```
images
```
Search for images

```
lxc image list ${REMOTE}:${SEARCH_TERM}
```
List of images
```
archlinux: archlinux
fedora rawhide: fedora/Rawhide
```
Create and start container
```
sudo lxc launch ${REMOTE}:${IMAGE} ${NAME}
```
Start/stop/restart container
```
sudo lxc start ${NAME}
sudo lxc stop ${NAME}
sudo lxc restart ${NAME}
```
Container info
```
sudo lxc info ${NAME}
```
Execute commands
```
sudo lxc exec ${NAME} -- ${COMMAND}
```
Open console
```
sudo lxc console ${NAME}
```
Delete container
```
sudo lxc delete --force ${NAME}
```
### Misc
Export image
```
sudo lxc image export ${REMOTE}:${IMAGE}
```
Reset LXD
```
rm -rf snap/lxd
sudo rm -rf /root/snap/lxd
sudo rm -rf /var/lib/lxd
sudo rm -rf /var/lib/lxc
sudo ip link delete lxdbr0
```

sudo mkdir -p /etc/systemd/system/user@.service.d
cat <<EOF | sudo tee /etc/systemd/system/user@.service.d/delegate.conf
[Service]
Delegate=cpu cpuset io memory pids
EOF
sudo systemctl daemon-reload