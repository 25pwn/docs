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

### Using init
[[Error] Can not distrobox enter after using --init flag, for ubuntu docker image](https://github.com/89luca89/distrobox/issues/348)

[[Error] distrobox enter fails on Fedora Silverblue 36 with --init container](https://github.com/89luca89/distrobox/issues/379)