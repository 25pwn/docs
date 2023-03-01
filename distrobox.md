---
tags: linux-platform containers
---
# Distrobox

[Docs](https://github.com/89luca89/distrobox/tree/main/docs)
```
IMAGE="archlinux:latest"
NAME="a0"

IMAGE="fedora:37"
NAME="f0"

mkdir -p "${HOME}/distrobox/${NAME}"

distrobox create \
--name "${NAME}" \
--image "${IMAGE}" \
--home "${HOME}/distrobox/${NAME}" \
--pre-init-hooks 'dnf install -y systemd' \
--init-hooks 'umount /var/lib/flatpak' \
--init

distrobox create 
```