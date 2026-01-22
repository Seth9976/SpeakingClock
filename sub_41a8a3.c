// 函数: sub_41a8a3
// 地址: 0x41a8a3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg4 += arg3:1.b
*arg1 += arg1.b
char* entry_ebx
*entry_ebx += arg2:1.b
entry_ebx.b = rol.b(entry_ebx.b, 0x90)
char* var_4 = entry_ebx
char* var_8 = arg4
arg4.w = 0xffff
int32_t* result = sub_403e64(arg1, arg4)

if (result == 0)
    return result

arg4.w = 0xffff
int32_t* eax_3 = sub_403e64(arg1, arg4)
sub_406550(&arg1[4])
return sub_403d1c(eax_3, sub_41a8ee+2, &arg1[4])
