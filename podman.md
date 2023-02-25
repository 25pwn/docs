# Podman
---
tags: linux-platform containers
---

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