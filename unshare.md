unshare \
--mount --uts --ipc --net --pid --user --cgroup --time \
--fork \
--map-user=1000 --map-group=1000 \
--setuid 1000 --setgid 1000 \
--root ../box/arch

unshare \
--mount --uts --ipc --net --pid --user --cgroup --time \
--fork --mount-proc \
--map-root-user \
--root ../box/arch
