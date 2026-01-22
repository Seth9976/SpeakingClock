// 函数: sub_473754
// 地址: 0x473754
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1

if ((ebx[7].b & 0x10) != 0 || data_4aba28 == 0 || sub_45fc28(ebx).b == 0)
    return 

int32_t eax_3 = GetWindowLongA(sub_45f888(ebx), 0xffffffec)

if (ebx[0xca].b == 0 && ebx[0xd4].b == 0)
    SetWindowLongA(sub_45f888(ebx), 0xffffffec, eax_3 & 0xfff7ffff)
    RedrawWindow(sub_45f888(ebx), nullptr, nullptr, 
        RDW_INVALIDATE | RDW_ERASE | RDW_ALLCHILDREN | RDW_FRAME)
    return 

if ((eax_3 & 0x80000) == 0)
    SetWindowLongA(sub_45f888(ebx), 0xffffffec, eax_3 | 0x80000)

data_4aba28(sub_45f888(ebx), ebx[0xd5], zx.d(*(ebx + 0x329)), 
    *((zx.d(ebx[0xca].b) << 2) + &data_4abac0) | *((zx.d(ebx[0xd4].b) << 2) + &data_4abac8))
