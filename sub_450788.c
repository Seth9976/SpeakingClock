// 函数: sub_450788
// 地址: 0x450788
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
int32_t edx
int32_t var_8_1 = edx

if (arg2[0xe] != 0)
    char eax_1 = sub_4500a4(arg2)
    
    if (arg1 == 0)
        SendMessageA(arg2[0xe], 0xb015, 0, 0)
    
    if (eax_1 != 0)
        DrawMenuBar(arg2[0xe])

return sub_450220(arg2, arg3)
