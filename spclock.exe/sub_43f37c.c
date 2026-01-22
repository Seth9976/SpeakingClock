// 函数: sub_43f37c
// 地址: 0x43f37c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx
sub_404074(arg1, edx)

if (arg1[7].b != 0)
    sub_43f620(arg1)

int32_t ebx_1
int32_t* esi_1
ebx_1, esi_1 = sub_43f3f8(arg1, 0)
sub_43fe5c(esi_1)
sub_43fe98(esi_1)
int32_t ecx = sub_403c68(esi_1[1])
int32_t eax_5 = esi_1[0xb]

if (eax_5 != 0)
    ecx = ClosePrinter(eax_5)

HGLOBAL hMem = esi_1[0xa]

if (hMem != 0)
    GlobalUnlock(hMem)
    ecx = GlobalFree(esi_1[0xa])
    esi_1[0xa] = 0

int32_t edx_1
edx_1.b = ebx_1.b & 0xfc
int32_t result = sub_403c58(ecx, edx_1)

if (ebx_1.b s<= 0)
    return result

return sub_40401c(esi_1)
