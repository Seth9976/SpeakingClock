// 函数: sub_43e004
// 地址: 0x43e004
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = *arg2

if (eax != 0x201 && eax != 0x203)
    if (eax == 0xbd11 && arg1[0x94].b != 0)
        return (eax - 0x203).b - 0xe
else if ((arg1[7].b & 0x10) == 0)
    int32_t esi
    esi.w = 0xffb3
    
    if (sub_403e64(arg1, esi) == 0)
        arg1[0x94].b = 1
        SetFocus(sub_45f888(arg1))
        arg1[0x94].b = 0
        esi.w = 0xffb3
        char result = sub_403e64(arg1, esi)
        
        if (result == 0)
            return result

return sub_45c95c(arg1, arg2)
