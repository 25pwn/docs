podman run --rm -it --hostname at0 \
--name at0 \
--systemd=always \
--userns keep-id \
--volume ${XDG_RUNTIME_DIR}:/run/user/1000 \
--env XDG_RUNTIME_DIR=/run/user/1000 \
--env WAYLAND_DISPLAY=${WAYLAND_DISPLAY} \
archlinux:latest

--volume $HOME/Downloads/:/home/firefox/Downloads:rw \
--volume /run/user/$UID/pulse/native:/run/user/$UID/pulse/native:ro \
--volume $XDG_RUNTIME_DIR/$WAYLAND_DISPLAY:/tmp/$WAYLAND_DISPLAY:ro \
localhost/firefox


podman create --hostname "a.s" --ipc host --name "a" --network host --privileged --security-opt label=disable --user root:root --label "manager=distrobox" --env "SHELL=/usr/bin/zsh" --env "HOME=/home/nicopwn" --volume /:/run/host:rslave --volume /dev:/dev:rslave --volume /sys:/sys:rslave --volume /tmp:/tmp:rslave --volume "/usr/bin/distrobox-init":/usr/bin/entrypoint:ro --volume "/usr/bin/distrobox-export":/usr/bin/distrobox-export:ro --volume "/usr/bin/distrobox-host-exec":/usr/bin/distrobox-host-exec:ro --volume "/home/nicopwn":"/home/nicopwn":rslave --volume /var/log/journal --env "HOME=/home/nicopwn/distrobox/a" --env "DISTROBOX_HOST_HOME=/home/nicopwn" --volume "/home/nicopwn/distrobox/a:/home/nicopwn/distrobox/a:rslave" --volume /run/user/1000:/run/user/1000:rslave --volume /etc/hosts:/etc/hosts:ro --volume /etc/localtime:/etc/localtime:ro --volume /etc/resolv.conf:/etc/resolv.conf:ro --ulimit host --annotation run.oci.keep_original_groups=1 --mount type=devpts,destination=/dev/pts --systemd=always --userns keep-id --entrypoint /usr/bin/entrypoint archlinux:latest -v --name "nicopwn" --user 1000 --group 1000 --home "/home/nicopwn/distrobox/a" --init "1" --pre-init-hooks "" -- 'umount /var/lib/flatpak' 



podman run --hostname "a.s" --ipc host --name "a" --network host --privileged --security-opt label=disable --user root:root --ulimit host --annotation run.oci.keep_original_groups=1 --systemd=always --userns keep-id -v --init "1" archlinux:latest bash 



podman run --rm -it --hostname at0 \
--name at0 \
--systemd=always \
fedora /sbin/init

dnf install -y systemd

podman run --rm -it --hostname at0 \
--name at0 \
--systemd=always \
systemd /sbin/init
