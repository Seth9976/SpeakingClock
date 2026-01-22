// 函数: sub_419c20
// 地址: 0x419c20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_403c68(*(sub_406b68() + 8))
int32_t* ebx = *(sub_406b68() + 0xc)
*(sub_406b68() + 8) = sub_41a1dc(ebx)
int32_t result = sub_419fe8(ebx, ebx[2] - 1)

if (ebx[2] != 0)
    return result

*(sub_406b68() + 0xc) = 0
return sub_403c68(ebx)
