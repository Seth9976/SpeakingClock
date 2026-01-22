// 函数: sub_40df14
// 地址: 0x40df14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t i_1 = 8
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t entry_ebx
*(esp_2 - 4) = entry_ebx
*(esp_2 - 8) = &var_4
*(esp_2 - 0xc) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x10) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x10
sub_40de50()
void* ebp_1 = sub_40c79c()

if (data_4af8d8 != 0)
    ebp_1 = sub_40c974()

uint32_t eax = GetThreadLocale()
*(esp_2 - 0x14) = ebp_1 - 0x10
sub_40c6e8(0, 0x14, eax)
sub_404bdc(&data_4af80c, *(ebp_1 - 0x10))
*(esp_2 - 0x14) = ebp_1 - 0x14
int32_t ecx_2 = sub_40c6e8(&data_40e1f4, 0x1b, eax)
*(ebp_1 - 0x14)
data_4af810 = sub_4094b8(ecx_2, 0)
*(esp_2 - 0x14) = ebp_1 - 0x18
int32_t ecx_4 = sub_40c6e8(&data_40e1f4, 0x1c, eax)
*(ebp_1 - 0x18)
char eax_10
uint32_t ecx_5
eax_10, ecx_5 = sub_4094b8(ecx_4, 0)
data_4af811 = eax_10
ecx_5.b = 0x2c
char eax_12
uint32_t ecx_6
eax_12, ecx_6 = sub_40c734(eax, 0xf, ecx_5)
data_4af812 = eax_12
ecx_6.b = 0x2e
data_4af813 = sub_40c734(eax, 0xe, ecx_6)
*(esp_2 - 0x14) = ebp_1 - 0x1c
int32_t ecx_8 = sub_40c6e8(&data_40e1f4, 0x19, eax)
*(ebp_1 - 0x1c)
char eax_18
uint32_t ecx_9
eax_18, ecx_9 = sub_4094b8(ecx_8, 0)
data_4af814 = eax_18
ecx_9.b = 0x2f
data_4af815 = sub_40c734(eax, 0x1d, ecx_9)
*(esp_2 - 0x14) = ebp_1 - 0x24
sub_40c6e8("m/d/yy", 0x1f, eax)
void* ebp_2 = sub_40ca24(*(ebp_1 - 0x24), ebp_1 - 0x20)
sub_404bdc(&data_4af818, *(ebp_2 - 0x20))
*(esp_2 - 0x14) = ebp_2 - 0x2c
sub_40c6e8("mmmm d, yyyy", 0x20, eax)
void* ebp_3 = sub_40ca24(*(ebp_2 - 0x2c), ebp_2 - 0x28)
sub_404bdc(&data_4af81c, *(ebp_3 - 0x28))
uint32_t ecx_12
ecx_12.b = 0x3a
data_4af820 = sub_40c734(eax, 0x1e, ecx_12)
*(esp_2 - 0x14) = ebp_3 - 0x30
sub_40c6e8(&data_40e228, 0x28, eax)
sub_404bdc(&data_4af824, *(ebp_3 - 0x30))
void* esp_19
*esp_19 = ebp_3 - 0x34
sub_40c6e8(&data_40e234, 0x29, eax)
sub_404bdc(&data_4af828, *(ebp_3 - 0x34))
sub_404b88(ebp_3 - 8)
sub_404b88(ebp_3 - 0xc)
*esp_19 = ebp_3 - 0x38
int32_t ecx_16 = sub_40c6e8(&data_40e1f4, 0x25, eax)
*(ebp_3 - 0x38)

if (sub_4094b8(ecx_16, 0) != 0)
    sub_404c20(ebp_3 - 4, 0x40e24c)
else
    sub_404c20(ebp_3 - 4, 0x40e240)

*esp_19 = ebp_3 - 0x3c
int32_t ecx_18 = sub_40c6e8(&data_40e1f4, 0x23, eax)
void* esp_26 = esp_19 + 4
*(ebp_3 - 0x3c)

if (sub_4094b8(ecx_18, 0) == 0)
    *(esp_26 - 4) = ebp_3 - 0x40
    int32_t ecx_20 = sub_40c6e8(&data_40e1f4, 0x1005, eax)
    *(ebp_3 - 0x40)
    
    if (sub_4094b8(ecx_20, 0) != 0)
        sub_404c20(ebp_3 - 8, "AMPM ")
    else
        sub_404c20(ebp_3 - 0xc, " AMPM")

*(esp_26 - 4) = *(ebp_3 - 8)
*(esp_26 - 8) = *(ebp_3 - 4)
*(esp_26 - 0xc) = &data_40e278
*(esp_26 - 0x10) = *(ebp_3 - 0xc)
sub_404f1c(&data_4af82c, 4)
*(esp_26 - 4) = *(ebp_3 - 8)
*(esp_26 - 8) = *(ebp_3 - 4)
*(esp_26 - 0xc) = ":mm:ss"
*(esp_26 - 0x10) = *(ebp_3 - 0xc)
sub_404f1c(&data_4af830, 4)
uint32_t ecx_21
ecx_21.b = 0x2c
data_4af8da = sub_40c734(eax, 0xc, ecx_21)
*(esp_26 + 8)
fsbase->NtTib.ExceptionList = *esp_26
*(esp_26 + 8) = sub_40e1e6
return sub_404bac(ebp_3 - 0x40, 0x10)
