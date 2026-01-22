// 函数: sub_410da4
// 地址: 0x410da4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int16_t eax = *arg2

if (arg3 == zx.d(eax))
    return sub_410ad8(arg1, arg2)

if (eax == 0x400c)
    *(arg2 + 8)
    return sub_410da4()

int32_t var_c

switch (arg3)
    case nullptr
        if (*arg2 == 1 && data_4aaa10 != 0)
            return sub_40ff78(1, 0)
        
        return sub_4107b0(arg1)
    case 1
        return sub_410518(arg1)
    case 2
        return sub_414a1c(arg1, sub_411714(arg2))
    case 3
        return sub_41497c(arg1, sub_411168(arg2))
    case 4
        sub_412ae4(arg2, arg4)
        float var_c_1 = fconvert.s(arg5)
        return sub_414a68(arg1)
    case 5
        sub_412750(arg2)
        return sub_414a8c(arg1, (fconvert.d(arg4)).d, var_c)
    case 6
        sub_413424(arg2)
        return sub_414ab8(arg1, (int.q(arg4)).d, var_c)
    case 7
        sub_412ebc(arg2)
        return sub_414ae4(arg1, (fconvert.d(arg4)).d, var_c)
    case 8
        return sub_410b88(arg1)
    case 9
        return sub_410c20(arg1)
    case 0xb
        return sub_414b10(arg1, sub_412230(arg2, arg3, arg3))
    case 0xd
        return sub_410c6c(arg1)
    case 0x10
        return sub_4149fc(arg1, sub_4115b8(arg2))
    case 0x11
        return sub_41499c(arg1, sub_41166c(arg2))
    case 0x12
        return sub_4149bc(arg1, sub_41180c(arg2))
    case 0x13
        return sub_4149dc(arg1, sub_4118e8(arg2))
    case 0x14
        int32_t eax_39
        int32_t edx_12
        eax_39, edx_12 = sub_411c38(arg2)
        return sub_414a3c(arg1, eax_39, edx_12)

if (arg3 == 0x100)
    return sub_410bd4(arg1)

if (arg3 == 0x101)
    return sub_40ff78(eax, 0x101)

return sub_410d38(arg1, arg2, arg3)
