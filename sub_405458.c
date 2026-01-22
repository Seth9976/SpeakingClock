// 函数: sub_405458
// 地址: 0x405458
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg3 == 0)
    return sub_405368(arg1) __tailcall

BSTR eax = SysAllocStringLen(arg2, arg3)

if (eax == 0)
    eax.b = 1
    noreturn sub_402ff8(eax) __tailcall

OLECHAR* bstrString = *arg1
*arg1 = eax
return SysFreeString(bstrString)
