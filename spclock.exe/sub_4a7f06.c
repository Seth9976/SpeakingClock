// 函数: sub_4a7f06
// 地址: 0x4a7f06
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_473910(arg1[-2], 0x64)
sub_4738d4(arg1[-2], 0x64)
sub_404598(__return_addr)
sub_405080(4, 9, *(arg1[-2] + 0x458), &arg1[-0xd])
*(arg1[-2] + 0x430) = sub_40947c(arg1[-0xd])
int32_t eax_8 = *(arg1[-2] + 0x430)

if (eax_8 u< 0x64 || eax_8 u> 0x3e8)
    *(arg1[-2] + 0x430) = 0x64

sub_405080(4, 0xd, *(arg1[-2] + 0x458), &arg1[-0xe])
*(arg1[-2] + 0x434) = sub_40947c(arg1[-0xe])
int32_t eax_16 = *(arg1[-2] + 0x434)

if (eax_16 u< 0 || eax_16 u> 0x3e7)
    *(arg1[-2] + 0x434) = 0

sub_405080(4, 0x11, *(arg1[-2] + 0x458), &arg1[-0xf])
*(arg1[-2] + 0x424) = sub_40947c(arg1[-0xf])
int32_t eax_24 = *(arg1[-2] + 0x424)

if (eax_24 s< 0 || eax_24 s> 0xff)
    *(arg1[-2] + 0x424) = 0xff

int32_t edx_3 = *(arg1[-2] + 0x45c)
int32_t eax_27 = edx_3

if (eax_27 != 0)
    eax_27 = *(eax_27 - 4)

if (eax_27 s< 0xe)
    int32_t ebx_1 = edx_3
    
    if (ebx_1 != 0)
        ebx_1 = *(ebx_1 - 4)
    
    eax_27.b = 0x30
    sub_40530c(eax_27.b, 0xe - ebx_1, &arg1[-0x10])
    sub_404e54(arg1[-2] + 0x45c, arg1[-0x10])

sub_405080(2, 1, *(arg1[-2] + 0x45c), &arg1[-0x11])
*(arg1[-2] + 0x410) = sub_40947c(arg1[-0x11])
int32_t eax_37 = *(arg1[-2] + 0x410)

if (eax_37 s> 0x3c || eax_37 s< 1)
    *(arg1[-2] + 0x410) = 0x3c

sub_405080(2, 3, *(arg1[-2] + 0x45c), &arg1[-0x12])
*(arg1[-2] + 0x408) = sub_40947c(arg1[-0x12])
int32_t eax_46 = *(arg1[-2] + 0x408)

if (eax_46 s> 0x17 || eax_46 s< 0)
    *(arg1[-2] + 0x408) = 0

sub_405080(2, 5, *(arg1[-2] + 0x45c), &arg1[-0x13])
*(arg1[-2] + 0x40c) = sub_40947c(arg1[-0x13])
int32_t eax_54 = *(arg1[-2] + 0x40c)

if (eax_54 s> 0x3b || eax_54 s< 0)
    *(arg1[-2] + 0x40c) = 0

sub_405080(2, 7, *(arg1[-2] + 0x45c), &arg1[-0x14])
*(arg1[-2] + 0x503) = sub_40947c(arg1[-0x14])
char eax_62 = *(arg1[-2] + 0x503)

if (eax_62 u> 1 || eax_62 u< 0)
    *(arg1[-2] + 0x503) = 0

sub_405080(2, 9, *(arg1[-2] + 0x45c), &arg1[-0x15])
*(arg1[-2] + 0x414) = sub_40947c(arg1[-0x15])
int32_t eax_70 = *(arg1[-2] + 0x414)

if (eax_70 s< 0 || eax_70 s> 6)
    *(arg1[-2] + 0x414) = 1

sub_405080(2, 0xb, *(arg1[-2] + 0x45c), &arg1[-0x16])
*(arg1[-2] + 0x428) = sub_40947c(arg1[-0x16])
int32_t eax_78 = *(arg1[-2] + 0x428)

if (eax_78 s< 0xa || eax_78 s> 0x41)
    *(arg1[-2] + 0x428) = 0x28

sub_405080(2, 0xd, *(arg1[-2] + 0x45c), &arg1[-0x17])
*(arg1[-2] + 0x42c) = sub_40947c(arg1[-0x17])
int32_t eax_86 = *(arg1[-2] + 0x42c)

if (eax_86 s< 0xa || eax_86 s> 0x41)
    *(arg1[-2] + 0x42c) = 0x28

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_404bac(&arg1[-0x17], 0x14)
sub_404b88(&arg1[-1])
*arg1
return &arg1[-1]
