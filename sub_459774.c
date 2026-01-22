// 函数: sub_459774
// 地址: 0x459774
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(*arg1 - 0x10))()

if ((arg1[0x14].b & 2) != 0)
    sub_457a40(arg1, 0)

if ((arg1[0x15].b & 2) != 0)
    arg1[0x15].w &= 0xfffd
    int32_t eax_2 = *(arg2 + 8)
    int32_t eax_3 = sx.d(eax_2.w)
    int32_t eax_4 = sx.d(eax_2:2.w)
    (*(*arg1 + 0x44))(eax_3, eax_4, eax_2, eax_3, eax_4)
    RECT lprc
    
    if (PtInRect(&lprc) != 0)
        int32_t esi
        esi.w = 0xffeb
        sub_403e64(arg1, esi)

return sub_45973c(arg1, arg2, 0)
