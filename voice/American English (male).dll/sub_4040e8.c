// 函数: sub_4040e8
// 地址: 0x4040e8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg3 == 0)
    return sub_403ffc(arg1) __tailcall

BSTR eax = SysAllocStringLen(arg2, arg3)

if (eax == 0)
    eax.b = 1
    noreturn sub_402710(eax) __tailcall

OLECHAR* bstrString = *arg1
*arg1 = eax
return SysFreeString(bstrString)
