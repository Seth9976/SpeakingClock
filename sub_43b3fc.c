// 函数: sub_43b3fc
// 地址: 0x43b3fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_460cf4(arg1)

if (sub_45fc28(arg1) != 0)
    char result = GetWindowLongA(sub_45f888(arg1), 0xfffffff0)
    
    if ((result & 4) == 0)
        return result

int32_t* esi
esi.w = 0xffb0
return sub_403e64(arg1, esi)
