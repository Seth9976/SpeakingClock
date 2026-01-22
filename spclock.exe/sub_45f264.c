// 函数: sub_45f264
// 地址: 0x45f264
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == arg3[0x10] && arg1 == arg3[0x11] && arg5 == arg3[0x12] && arg4 == arg3[0x13])
    return arg4

char eax_3 = sub_45fc28(arg3)
BOOL eax_5

if (eax_3 != 0)
    eax_5 = IsIconic(arg3[0x6d])

if (eax_3 == 0 || eax_5 != 0)
    arg3[0x10] = arg2
    arg3[0x11] = arg1
    arg3[0x12] = arg5
    arg3[0x13] = arg4
    
    if (sub_45fc28(arg3) != 0)
        WINDOWPLACEMENT lpwndpl
        lpwndpl.length = 0x2c
        GetWindowPlacement(arg3[0x6d], &lpwndpl)
        int32_t var_40
        sub_4570f0(arg3, &var_40)
        lpwndpl.rcNormalPosition.left = var_40
        var_10
        void* edi_1 = &var_10
        void var_3c
        void* esi_1 = &var_3c
        *edi_1 = *esi_1
        void* edi_2 = edi_1 + 4
        void* esi_2 = esi_1 + 4
        *edi_2 = *esi_2
        *(edi_2 + 4) = *(esi_2 + 4)
        SetWindowPlacement(arg3[0x6d], &lpwndpl)
else
    SetWindowPos(arg3[0x6d], nullptr, arg2, arg1, arg5, arg4, 0x14)

sub_456cdc(arg3)
sub_45a538(arg3)
return (*(*arg3 + 0x5c))()
