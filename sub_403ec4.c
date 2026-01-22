// 函数: sub_403ec4
// 地址: 0x403ec4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
esi.w = *arg2
esi.w = esi.w

if (esi.w != 0 && esi.w u< 0xc000)
    sub_403e34(*arg1, esi.w)
    
    if (esi.w != 0xc000)
        jump(esi)

jump(*(*arg1 + 0xfffffff0))
