size = 32x32

iconsdir = $(datadir)/icons/hicolor/$(size)/apps

icons_DATA =					\
	consort-panel-clock.png			\
	consort-panel-fish.png			\
	consort-panel-force-quit.png		\
	consort-panel-launcher.png		\
	consort-panel-notification-area.png	\
	consort-panel-separator.png		\
	consort-panel.png				\
	consort-panel-window-list.png		\
	consort-panel-window-menu.png		\
	consort-panel-workspace-switcher.png

icons_SOURCE =					\
	consort-panel-clock.svg			\
	consort-panel-fish.svg			\
	consort-panel-force-quit.svg		\
	consort-panel-launcher.svg		\
	consort-panel-notification-area.svg	\
	consort-panel-separator.svg		\
	consort-panel.svg				\
	consort-panel-window-list.svg		\
	consort-panel-window-menu.svg		\
	consort-panel-workspace-switcher.svg

gtk_update_icon_cache = gtk-update-icon-cache -f -t $(datadir)/icons/hicolor

install-data-hook: update-icon-cache
uninstall-hook: update-icon-cache
update-icon-cache:
	@-if test -z "$(DESTDIR)"; then \
		echo "Updating Gtk icon cache."; \
		$(gtk_update_icon_cache); \
	else \
		echo "*** Icon cache not updated. After (un)install, run this:"; \
		echo "***   $(gtk_update_icon_cache)"; \
	fi

EXTRA_DIST =		\
	$(icons_DATA)	\
	$(icons_SOURCE)

-include $(top_srcdir)/git.mk
