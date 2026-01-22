// 函数: sub_447ac4
// 地址: 0x447ac4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404b88(&arg1[0x11])
int32_t* eax_2 = arg1[0xf]
int32_t result = (*(*eax_2 + 0x38))(eax_2, &arg1[0x19])

if ((result & 0x80000000) == 0)
    int32_t esi
    esi.w = 0xffe6
    result = sub_403e64(arg1, esi, arg1[0x19], &arg1[0x11])
    
    if ((result & 0x80000000) == 0)
        esi.w = 0xffea
        sub_403e64(arg1, esi)

sub_406550(&arg1[0x19])
return result
