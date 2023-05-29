idf_component_register(SRCS "file_server_main.c" "file_server.c" "mount.c"
                    INCLUDE_DIRS "."
                    PRIV_REQUIRES spiffs esp_http_server fatfs nvs_flash esp_event vfs esp_netif
                    EMBED_FILES "favicon.ico" "upload_script.html")
