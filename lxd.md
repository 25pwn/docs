---
tags:
- platform/linux
---
# **LXD**
[Introduction](https://linuxcontainers.org/lxd/introduction/)

[Comparing LXD vs. LXC](https://discuss.linuxcontainers.org/t/comparing-lxd-vs-lxc/24)

https://linuxcontainers.org/lxd/getting-started-cli/

https://linuxcontainers.org/lxd/advanced-guide/

https://linuxcontainers.org/lxd/docs/master/getting_started/

https://wiki.archlinux.org/title/Linux_Containers

https://wiki.archlinux.org/title/LXD

https://www.cyberciti.biz/faq/how-to-install-lxd-container-hypervisor-on-ubuntu-16-04-lts-server/

# [Usage](https://linuxcontainers.org/lxd/docs/master/)
## [Setup](https://linuxcontainers.org/lxd/docs/master/getting_started/)
### [Installation](https://linuxcontainers.org/lxd/docs/master/installing/)
Using [snap](https://snapcraft.io/docs/installing-snapd):
```
sudo snap install lxd
```
Required on arch:
```
sudo systemctl enable --now lxd.service
```
### [Initialization](https://linuxcontainers.org/lxd/docs/master/howto/initialize/)
	```
	cat <<- 'EOF' | sudo lxd init --preseed
	config:
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
	cluster: null
	EOF
	```
### [Server configuration](https://linuxcontainers.org/lxd/docs/master/server/)

	Recommended defaults:
	```
	sudo lxc config set \
	images.auto_update_cached=false
	```
### [Remotes](https://linuxcontainers.org/lxd/docs/master/remotes/)

	List remotes
	```
	lxc remote list
	```
## [Images](https://linuxcontainers.org/lxd/docs/master/images/)

Search for images
```
lxc image list ${REMOTE}:${SEARCH_TERM}
```

List of images
```
archlinux: archlinux
fedora rawhide: fedora/Rawhide
```

Export image
```
sudo lxc image export ${REMOTE}:${IMAGE}
```

## [Profiles](https://linuxcontainers.org/lxd/docs/master/profiles/#)

Recommended defaults:
```
sudo lxc profile set default \
boot.autostart=false \
security.nesting=true \
security.privileged=false

```
## [Instances](https://linuxcontainers.org/lxd/docs/master/instances/)
Create instance
```
sudo lxc init ${REMOTE}:${IMAGE} ${NAME}
```
Create and start instance
```
sudo lxc launch ${REMOTE}:${IMAGE} ${NAME}
```
Start/stop/restart instance
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

## etc
[Bindmount for .X11-unix only works when done if container is running](https://github.com/lxc/lxd/issues/4540#issuecomment-387644954)