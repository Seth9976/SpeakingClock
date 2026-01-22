// 函数: sub_43b724
// 地址: 0x43b724
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_45fc28(*(arg1 + 0x18))

if (result != 0)
    int32_t eax_1
    eax_1.b = arg2.b ^ 1
    result = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xb, eax_1 & 0x7f, 0)
    int32_t ebx
    ebx.b = arg2.b ^ 1
    
    if (ebx.b != 0)
        sub_458ac8(*(arg1 + 0x18), 0)
        return sub_457dd8(*(arg1 + 0x18))

return result
