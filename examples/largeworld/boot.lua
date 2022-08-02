-- load config files during orxConfig init to ensure settings are loaded in memory when other modules inits (e.g.display)
lorx.resource.addStorage("Config", "config", false)
lorx.config.load("LargeWorldd.ini")