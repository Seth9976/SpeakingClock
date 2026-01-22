// 函数: sub_404038
// 地址: 0x404038
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg2 == 0)
    return sub_403ffc(arg1) __tailcall

uint32_t len = *(arg2 - 4) u>> 1

if (len == 0)
    return sub_403ffc(arg1) __tailcall

int32_t result = SysReAllocStringLen(arg1, arg2, len)

if (result != 0)
    return result

result.b = 1
noreturn sub_402710(result) __tailcall
