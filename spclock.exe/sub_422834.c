// 函数: sub_422834
// 地址: 0x422834
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx = sub_404fb0(arg2, arg3)
char* var_14
int32_t __saved_edi

if (&__saved_edi != 8)
    char* eax_1 = arg3
    
    if (eax_1 != 0)
        eax_1 = *(eax_1 - 4)
    
    var_14 = eax_1
    sub_4229ec(ecx, 0x14)
    sub_420654(arg1, &var_14, 4)
    return sub_420654(arg1, arg3, var_14)

char* eax_7 = arg2

if (eax_7 != 0)
    eax_7 = *(eax_7 - 4)

var_14 = eax_7

if (var_14 s> 0xff)
    sub_4229ec(ecx, 0xc)
    sub_420654(arg1, &var_14, 4)
else
    sub_4229ec(ecx, 6)
    sub_420654(arg1, &var_14, 1)

return sub_420654(arg1, arg2, var_14)
