#include "rtoslib.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

static int ldelay(lua_State *L)
{
    int ms = luaL_checkinteger(L, 1);

    vTaskDelay(pdMS_TO_TICKS(ms));

    return 0;
}

static const struct luaL_Reg lrtos_funcs[] = {
    { "delay", ldelay },
    { NULL, NULL }
};

int luaopen_lrtos(lua_State *L)
{
#if LUA_VERSION_NUM > 501
    luaL_newlib(L, lrtos_funcs);
#else
	luaL_register(L, "rtos", lrtos_funcs);
#endif
    return 1;
}
