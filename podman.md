---
tags: linux-platform containers
---
# Podman
## Usage
sources: https://wiki.archlinux.org/title/Podman

Search for images
```
podman search ${REGISTRY}/${SEARCH_TERM}
```
List of registries
```
docker.io: docker
registry.fedoraproject.org: fedora
```
Pull image
```
podman pull ${REGISTRY}/${SEARCH_TERM}
```
Create container
```
podman create
```
Create and start container
```
podman run 
```

## GUI management
[Pods](https://github.com/marhkb/pods)

## Systemd
[How to run systemd in a container](https://developers.redhat.com/blog/2019/04/24/how-to-run-systemd-in-a-container)

fedora-systemd-dockerfile:
```
FROM fedora

RUN dnf -y install systemd; dnf clean all;

CMD [ "/sbin/init" ]
```

```
podman build -f fedora-systemd-dockerfile -t fedora-systemd
podman run --rm -it \
--hostname fedora-systemd-test \
--name fedora-systemd-test \
--systemd=always \
fedora-systemd /sbin/init & disown
setsebool -P container_manage_cgroup true
podman exec -it fedora-systemd-test /bin/bash
```

## Integration
[distrobox issue](https://github.com/89luca89/distrobox/issues/28#issuecomment-1358676335)