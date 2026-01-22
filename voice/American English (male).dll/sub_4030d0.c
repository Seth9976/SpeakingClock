// 函数: sub_4030d0
// 地址: 0x4030d0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi
esi.w = *arg2
esi.w = esi.w

if (esi.w != 0 && esi.w u< 0xc000)
    sub_403060(*arg1, esi.w)
    
    if (esi.w != 0xc000)
        jump(esi)

jump(*(*arg1 + 0xfffffff0))
