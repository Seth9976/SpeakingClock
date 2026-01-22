// 函数: sub_43107c
// 地址: 0x43107c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
HPALETTE edi = arg1
void* ebp = edi

if (edi->__offset(0x30).b != 0 || *(ebp + 0x10) != 0 || *(ebp + 0x14) == 0)
    return 

int32_t eax = *(ebp + 0x14)

if (eax == *(ebp + 8))
    ebp = sub_42f900(eax)

arg1 = sub_42d238(*(ebp + 0x14), nullptr, 1 << (*(ebp + 0x3e)).b)
*(ebp + 0x10) = arg1

if (arg1 != 0)
    return 

HDC eax_3 = GetDC(nullptr)
sub_42cb40(eax_3)

if (*(ebp + 0x71) == 0)
    ebx = GetDeviceCaps(eax_3, 0xc) * GetDeviceCaps(eax_3, 0xe)

if (*(ebp + 0x71) != 0 || ebx s< zx.d(*(ebp + 0x2a)) * zx.d(*(ebp + 0x28)))
    ebx.b = 1
else
    ebx = 0

*(ebp + 0x71) = ebx.b

if (ebx.b != 0)
    *(ebp + 0x10) = CreateHalftonePalette(eax_3)

ReleaseDC(nullptr, eax_3)

if (*(ebp + 0x10) == 0)
    edi->__offset(0x30).b = 1
