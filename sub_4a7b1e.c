// 函数: sub_4a7b1e
// 地址: 0x4a7b1e
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4b1e24 = 0
sub_404598(__return_addr)
sub_42911c(*(arg1 - 0xc), "CurrentVer", arg1 - 4)
sub_404fb0(*(arg1 - 4), "2.6")

if (*(arg1 - 4) == 0)
    sub_4290ec(*(arg1 - 0xc), "CurrentVer", 0x4a8350)

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
arg2 = &data_4a7bb0
sub_428ae8(*(arg1 - 0xc))
int32_t ecx_2 = sub_403c68(*(arg1 - 0xc))
int32_t edx_1 = *(*(arg1 - 8) + 0x454)
int32_t eax_9 = edx_1

if (eax_9 != 0)
    eax_9 = *(eax_9 - 4)

if (eax_9 s< 0xc)
    int32_t ebx_1 = edx_1
    
    if (ebx_1 != 0)
        ebx_1 = *(ebx_1 - 4)
    
    eax_9.b = 0x30
    sub_40530c(eax_9.b, 0xc - ebx_1, arg1 - 0x24)
    ecx_2 = sub_404e54(*(arg1 - 8) + 0x454, *(arg1 - 0x24))

char* eax_14
eax_14.b = **(*(arg1 - 8) + 0x454) == 0x31
*(*(arg1 - 8) + 0x44c) = eax_14.b
void* eax_16
eax_16.b = *(*(*(arg1 - 8) + 0x454) + 1) == 0x31
*(*(arg1 - 8) + 0x444) = eax_16.b
void* eax_18
eax_18.b = *(*(*(arg1 - 8) + 0x454) + 2) == 0x31
*(*(arg1 - 8) + 0x449) = eax_18.b
void* eax_20
eax_20.b = *(*(*(arg1 - 8) + 0x454) + 3) == 0x31
*(*(arg1 - 8) + 0x440) = eax_20.b
void* eax_22
eax_22.b = *(*(*(arg1 - 8) + 0x454) + 4) == 0x31
*(*(arg1 - 8) + 0x441) = eax_22.b
void* eax_24
eax_24.b = *(*(*(arg1 - 8) + 0x454) + 5) == 0x31
*(*(arg1 - 8) + 0x445) = eax_24.b
void* eax_26
eax_26.b = *(*(*(arg1 - 8) + 0x454) + 6) == 0x31
*(*(arg1 - 8) + 0x448) = eax_26.b
void* eax_28
eax_28.b = *(*(*(arg1 - 8) + 0x454) + 7) == 0x31
*(*(arg1 - 8) + 0x447) = eax_28.b
void* eax_30
eax_30.b = *(*(*(arg1 - 8) + 0x454) + 8) == 0x31
*(*(arg1 - 8) + 0x446) = eax_30.b
void* eax_32
eax_32.b = *(*(*(arg1 - 8) + 0x454) + 9) == 0x31
*(*(arg1 - 8) + 0x44f) = eax_32.b
void* eax_34
eax_34.b = *(*(*(arg1 - 8) + 0x454) + 0xa) == 0x31
*(*(arg1 - 8) + 0x501) = eax_34.b
void* eax_36
eax_36.b = *(*(*(arg1 - 8) + 0x454) + 0xb) == 0x31
*(*(arg1 - 8) + 0x450) = eax_36.b

if (*(*(arg1 - 8) + 0x4fd) != 0)
    *(*(arg1 - 8) + 0x448) = 1

if (*(*(arg1 - 8) + 0x501) == 0)
    sub_491ac4(*(*(arg1 - 8) + 0x3f8), 0, ecx_2)
    int16_t eax_48 = sub_44a90c(0, 0)
    sub_44e4c4(*(*(arg1 - 8) + 0x3f4), eax_48)
else
    BOOL edx_15
    edx_15.b = 1
    sub_491ac4(*(*(arg1 - 8) + 0x3f8), edx_15, ecx_2)
    int16_t eax_43 = sub_44a90c(0x53, 6)
    sub_44e4c4(*(*(arg1 - 8) + 0x3f4), eax_43)

int32_t edx_18 = *(*(arg1 - 8) + 0x458)
int32_t eax_52 = edx_18

if (eax_52 != 0)
    eax_52 = *(eax_52 - 4)

if (eax_52 s< 0x14)
    int32_t ebx_3 = edx_18
    
    if (ebx_3 != 0)
        ebx_3 = *(ebx_3 - 4)
    
    eax_52.b = 0x30
    sub_40530c(eax_52.b, 0x14 - ebx_3, arg1 - 0x28)
    sub_404e54(*(arg1 - 8) + 0x458, *(arg1 - 0x28))

if (*(*(arg1 - 8) + 0x4fd) == 0)
    arg2 = arg1
    int32_t (* arg_4)() = j_sub_404188
    __return_addr = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &__return_addr
    sub_405080(4, 1, *(*(arg1 - 8) + 0x458), arg1 - 0x2c)
    int32_t ebx_5 = sub_40947c(*(arg1 - 0x2c))
    
    if (ebx_5 s< 0)
        ebx_5 = 0
    
    *data_4ac4b8
    
    if (ebx_5 s> sub_4740cc())
        *data_4ac4b8
        ebx_5 = sub_4740cc() - 0x32
    
    sub_473910(*(arg1 - 8), ebx_5.w)
    sub_405080(4, 5, *(*(arg1 - 8) + 0x458), arg1 - 0x30)
    int32_t ebx_7 = sub_40947c(*(arg1 - 0x30))
    
    if (ebx_7 s< 0)
        ebx_7 = 0
    
    *data_4ac4b8
    
    if (ebx_7 s> sub_4740d8())
        *data_4ac4b8
        ebx_7 = sub_4740d8() - 0x32
    
    sub_4738d4(*(arg1 - 8), ebx_7)
    fsbase->NtTib.ExceptionList = __return_addr
else
    *data_4ac4b8
    int32_t eax_59 = sub_4740cc()
    int32_t edx_22 = eax_59 s>> 1
    bool c_1 = unimplemented  {sar edx, 0x1}
    
    if (eax_59 s>> 1 s< 0)
        edx_22 = adc.d(edx_22, 0, c_1)
    
    sub_473910(*(arg1 - 8), edx_22.w - 0x48)
    *data_4ac4b8
    int32_t eax_63 = sub_4740d8()
    int32_t edx_25 = eax_63 s>> 1
    bool c_2 = unimplemented  {sar edx, 0x1}
    
    if (eax_63 s>> 1 s< 0)
        edx_25 = adc.d(edx_25, 0, c_2)
    
    sub_4738d4(*(arg1 - 8), edx_25 - 0xaa)

sub_405080(4, 9, *(*(arg1 - 8) + 0x458), arg1 - 0x34)
*(*(arg1 - 8) + 0x430) = sub_40947c(*(arg1 - 0x34))
int32_t eax_95 = *(*(arg1 - 8) + 0x430)

if (eax_95 u< 0x64 || eax_95 u> 0x3e8)
    *(*(arg1 - 8) + 0x430) = 0x64

sub_405080(4, 0xd, *(*(arg1 - 8) + 0x458), arg1 - 0x38)
*(*(arg1 - 8) + 0x434) = sub_40947c(*(arg1 - 0x38))
int32_t eax_103 = *(*(arg1 - 8) + 0x434)

if (eax_103 u< 0 || eax_103 u> 0x3e7)
    *(*(arg1 - 8) + 0x434) = 0

sub_405080(4, 0x11, *(*(arg1 - 8) + 0x458), arg1 - 0x3c)
*(*(arg1 - 8) + 0x424) = sub_40947c(*(arg1 - 0x3c))
int32_t eax_111 = *(*(arg1 - 8) + 0x424)

if (eax_111 s< 0 || eax_111 s> 0xff)
    *(*(arg1 - 8) + 0x424) = 0xff

int32_t edx_33 = *(*(arg1 - 8) + 0x45c)
int32_t eax_114 = edx_33

if (eax_114 != 0)
    eax_114 = *(eax_114 - 4)

if (eax_114 s< 0xe)
    int32_t ebx_9 = edx_33
    
    if (ebx_9 != 0)
        ebx_9 = *(ebx_9 - 4)
    
    eax_114.b = 0x30
    sub_40530c(eax_114.b, 0xe - ebx_9, arg1 - 0x40)
    sub_404e54(*(arg1 - 8) + 0x45c, *(arg1 - 0x40))

sub_405080(2, 1, *(*(arg1 - 8) + 0x45c), arg1 - 0x44)
*(*(arg1 - 8) + 0x410) = sub_40947c(*(arg1 - 0x44))
int32_t eax_124 = *(*(arg1 - 8) + 0x410)

if (eax_124 s> 0x3c || eax_124 s< 1)
    *(*(arg1 - 8) + 0x410) = 0x3c

sub_405080(2, 3, *(*(arg1 - 8) + 0x45c), arg1 - 0x48)
*(*(arg1 - 8) + 0x408) = sub_40947c(*(arg1 - 0x48))
int32_t eax_133 = *(*(arg1 - 8) + 0x408)

if (eax_133 s> 0x17 || eax_133 s< 0)
    *(*(arg1 - 8) + 0x408) = 0

sub_405080(2, 5, *(*(arg1 - 8) + 0x45c), arg1 - 0x4c)
*(*(arg1 - 8) + 0x40c) = sub_40947c(*(arg1 - 0x4c))
int32_t eax_141 = *(*(arg1 - 8) + 0x40c)

if (eax_141 s> 0x3b || eax_141 s< 0)
    *(*(arg1 - 8) + 0x40c) = 0

sub_405080(2, 7, *(*(arg1 - 8) + 0x45c), arg1 - 0x50)
*(*(arg1 - 8) + 0x503) = sub_40947c(*(arg1 - 0x50))
char eax_149 = *(*(arg1 - 8) + 0x503)

if (eax_149 u> 1 || eax_149 u< 0)
    *(*(arg1 - 8) + 0x503) = 0

sub_405080(2, 9, *(*(arg1 - 8) + 0x45c), arg1 - 0x54)
*(*(arg1 - 8) + 0x414) = sub_40947c(*(arg1 - 0x54))
int32_t eax_157 = *(*(arg1 - 8) + 0x414)

if (eax_157 s< 0 || eax_157 s> 6)
    *(*(arg1 - 8) + 0x414) = 1

sub_405080(2, 0xb, *(*(arg1 - 8) + 0x45c), arg1 - 0x58)
*(*(arg1 - 8) + 0x428) = sub_40947c(*(arg1 - 0x58))
int32_t eax_165 = *(*(arg1 - 8) + 0x428)

if (eax_165 s< 0xa || eax_165 s> 0x41)
    *(*(arg1 - 8) + 0x428) = 0x28

sub_405080(2, 0xd, *(*(arg1 - 8) + 0x45c), arg1 - 0x5c)
*(*(arg1 - 8) + 0x42c) = sub_40947c(*(arg1 - 0x5c))
int32_t eax_173 = *(*(arg1 - 8) + 0x42c)

if (eax_173 s< 0xa || eax_173 s> 0x41)
    *(*(arg1 - 8) + 0x42c) = 0x28

fsbase->NtTib.ExceptionList = arg3
arg4 = 0x4a828b
sub_404bac(arg1 - 0x5c, 0x14)
sub_404b88(arg1 - 4)
return arg1 - 4
