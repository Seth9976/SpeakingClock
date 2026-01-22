// 函数: sub_46f3d4
// 地址: 0x46f3d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == *(arg1 + 0x271))
    return 

*(arg1 + 0x271) = arg2
char temp0_1
char temp1_1

if (arg1[0x96].b != 0)
    char eax = *(arg1 + 0x271)
    temp0_1 = eax
    
    if (temp0_1 != 2)
        temp1_1 = eax - 2

if (arg1[0x96].b != 0 && (temp0_1 == 2 || temp1_1 == 3))
    arg2 = 1
else
    arg2 = 0

sub_46cdc4(arg1, arg2)

if (sub_45fc28(arg1).b == 0)
    return 

if ((arg1[7].b & 0x10) == 0)
label_46f43b:
    enum WINDOW_LONG_PTR_INDEX var_18 = 0xfffffff0
    int32_t dwNewLong = GetWindowLongA(sub_45f888(arg1), var_18)
    var_18 = 0xffffffec
    int32_t dwNewLong_1 = GetWindowLongA(sub_45f888(arg1), var_18)
    var_18 = 0xffffffe6
    uint32_t var_c = GetClassLongA(sub_45f888(arg1), var_18)
    var_18 = &var_c
    int32_t esi
    esi.w = 0xffa9
    sub_403e64(arg1, esi, &dwNewLong, &dwNewLong_1, var_18, dwNewLong, dwNewLong_1, var_c)
    esi.w = 0xffaa
    sub_403e64(arg1, esi, &var_18, &dwNewLong)
    SetWindowLongA(sub_45f888(arg1), 0xfffffff0, var_18)
    SetWindowLongA(sub_45f888(arg1), 0xffffffec, dwNewLong)
    SetClassLongA(sub_45f888(arg1), 0xffffffe6, dwNewLong_1)
    
    if (sub_45fc28(arg1) != 0)
        if (*data_4ac1d0 != 0)
            if (*(arg1 + 0x271) == 3)
                SendMessageA(sub_45f888(arg1), 0x80, 1, 0)
            else
                HICON lParam = sub_4713f8(arg1)
                SendMessageA(sub_45f888(arg1), 0x80, 1, lParam)
        
        GetSystemMenu(sub_45f888(arg1), 0xffffffff)
        sub_458ac8(arg1, 0)
    
    SetWindowPos(sub_45f888(arg1), nullptr, 0, 0, 0, 0, 0x37)
    (*(*arg1 + 0x80))()
else if ((arg1[7].b & 0x10) != 0 && arg1[0xc] != 0)
    goto label_46f43b
