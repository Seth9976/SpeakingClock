// 函数: sub_485ae4
// 地址: 0x485ae4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_4803e0()
void* ebx_1
void* esi_1
ebx_1, esi_1 = sub_45b980(arg1, arg2)
*(ebx_1 + 4) |= 2

if (*(esi_1 + 0x270) != 1)
    *(ebx_1 + 4) |= 8
else
    *(ebx_1 + 4) |= 4

if (*(esi_1 + 0x271) == 0)
    *(ebx_1 + 4) |= 0x40

if (*(esi_1 + 0x250) != 0)
    *(ebx_1 + 4) |= 0x20

if (*(esi_1 + 0x266) == 0)
    *(ebx_1 + 4) |= 0x80

if (*(esi_1 + 0x267) != 0)
    *(ebx_1 + 4) |= 1

sub_45b8ac(sub_485b68, ebx_1)
int32_t result = (*(ebx_1 + 0x24) & 0xfffffffc) | 8
*(ebx_1 + 0x24) = result
return result
