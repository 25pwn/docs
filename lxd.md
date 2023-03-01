---
tags: linux-platform containers
---
# LXD
## Installation
sources:

https://linuxcontainers.org/lxd/getting-started-cli/

https://linuxcontainers.org/lxd/advanced-guide/

https://linuxcontainers.org/lxd/docs/master/getting_started/

https://wiki.archlinux.org/title/Linux_Containers

https://wiki.archlinux.org/title/LXD
	
### Configuration
```
sudo systemctl enable --now lxd.service
sudo lxc profile set default boot.autostart=false

echo 'config:
  images.auto_update_interval: "0"
networks:
- config:
    ipv4.address: auto
    ipv6.address: auto
  description: ""
  name: lxdbr0
  type: ""
  project: default
storage_pools:
- config:
    source: /var/lib/lxd/storage-pools/default
  description: ""
  name: default
  driver: btrfs
profiles:
- config: {}
  description: ""
  devices:
    eth0:
      name: eth0
      network: lxdbr0
      type: nic
    root:
      path: /
      pool: default
      type: disk
  name: default
projects: []
cluster: null' | sudo lxd init --preseed
```

	# https://www.cyberciti.biz/faq/how-to-install-lxd-container-hypervisor-on-ubuntu-16-04-lts-server/

	# this requires snap:
	# https://snapcraft.io/docs/installing-snapd

	echo "Installing LXD"
	sudo snap install lxd

## [Usage](https://linuxcontainers.org/lxd/docs/master/)
### [Images](https://linuxcontainers.org/lxd/docs/master/images/)
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
### [Instances](https://linuxcontainers.org/lxd/docs/master/instances/)
Create instance
```
sudo lxc init ${REMOTE}:${IMAGE} ${NAME} --config ${CONFIGS}
```
Create and start instance
```
sudo lxc launch ${REMOTE}:${IMAGE} ${NAME}
```
```
sudo lxc launch ${REMOTE}:${IMAGE} ${NAME} \
--config security.nesting=true \
--config security.privileged=false \
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