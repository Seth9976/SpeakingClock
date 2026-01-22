// 函数: sub_410d38
// 地址: 0x410d38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_14 = arg3
int16_t ebp = *arg2

if (ebp == 0x101)
    return sub_410b1c(arg1, arg2, arg3.w)

char eax_3
int32_t ebx_1
int32_t esi_1
eax_3, ebx_1, esi_1 = sub_415ce4(ebp, &var_14)

if (eax_3 != 0)
    return (*(*var_14 + 0x1c))(esi_1)

char eax_6
int16_t* ebx_3
int32_t esi_2
eax_6, ebx_3, esi_2 = sub_415ce4(esi_1.w, &var_14)

if (eax_6 == 0)
    return sub_410cb8(arg1, ebx_3, esi_2)

return (*(*var_14 + 0x18))()
