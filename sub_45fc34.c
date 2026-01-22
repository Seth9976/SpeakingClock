// 函数: sub_45fc34
// 地址: 0x45fc34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND var_4c = arg1[0x6d]
int32_t var_48
int32_t var_44

if (IsIconic(var_4c) == 0)
    var_4c = &var_48
    GetWindowRect(arg1[0x6d], var_4c)
else
    int32_t var_38 = 0x2c
    var_4c = &var_38
    GetWindowPlacement(arg1[0x6d], var_4c)
    int32_t var_1c
    var_48 = var_1c
    int32_t* edi_1 = &var_44
    void var_18
    void* esi_1 = &var_18
    *edi_1 = *esi_1
    void* edi_2 = &edi_1[1]
    void* esi_2 = esi_1 + 4
    *edi_2 = *esi_2
    *(edi_2 + 4) = *(esi_2 + 4)

var_4c = 0xfffffff0
int32_t var_40

if ((GetWindowLongA(arg1[0x6d], var_4c) & 0x40000000) != 0)
    var_4c = 0xfffffff8
    int32_t hWnd = GetWindowLongA(arg1[0x6d], var_4c)
    
    if (hWnd != 0)
        var_4c = &var_48
        ScreenToClient(hWnd, var_4c)
        var_4c = &var_40
        ScreenToClient(hWnd, var_4c)

arg1[0x10] = var_48
arg1[0x11] = var_44
arg1[0x12] = var_40 - var_48
int32_t var_3c
arg1[0x13] = var_3c - var_44
return sub_456cdc(arg1)
