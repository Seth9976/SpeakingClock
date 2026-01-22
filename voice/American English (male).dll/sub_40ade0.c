// 函数: sub_40ade0
// 地址: 0x40ade0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

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
*(esp_2 - 0xc) = j_sub_40338c
TEB* fsbase
*(esp_2 - 0x10) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x10
sub_40ac6c()
void* ebp_1 = sub_4097dc()

if (data_41474c != 0)
    ebp_1 = sub_4099b4()

uint32_t eax = GetThreadLocale()
*(esp_2 - 0x14) = ebp_1 - 0x10
sub_40972c(0, 0x14, eax)
sub_403a40(&data_414680, *(ebp_1 - 0x10))
*(esp_2 - 0x14) = ebp_1 - 0x14
int32_t ecx_2 = sub_40972c(&data_40b0c0, 0x1b, eax)
*(ebp_1 - 0x14)
data_414684 = sub_406c2c(ecx_2, 0)
*(esp_2 - 0x14) = ebp_1 - 0x18
int32_t ecx_4 = sub_40972c(&data_40b0c0, 0x1c, eax)
*(ebp_1 - 0x18)
char eax_10
int32_t ecx_5
eax_10, ecx_5 = sub_406c2c(ecx_4, 0)
data_414685 = eax_10
ecx_5.b = 0x2c
char eax_12
int32_t ecx_6
eax_12, ecx_6 = sub_409778(eax, 0xf, ecx_5)
data_414686 = eax_12
ecx_6.b = 0x2e
data_414687 = sub_409778(eax, 0xe, ecx_6)
*(esp_2 - 0x14) = ebp_1 - 0x1c
int32_t ecx_8 = sub_40972c(&data_40b0c0, 0x19, eax)
*(ebp_1 - 0x1c)
char eax_18
int32_t ecx_9
eax_18, ecx_9 = sub_406c2c(ecx_8, 0)
data_414688 = eax_18
ecx_9.b = 0x2f
data_414689 = sub_409778(eax, 0x1d, ecx_9)
*(esp_2 - 0x14) = ebp_1 - 0x24
sub_40972c("m/d/yy", 0x1f, eax)
void* ebp_2 = sub_409a64(*(ebp_1 - 0x24), ebp_1 - 0x20)
sub_403a40(&data_41468c, *(ebp_2 - 0x20))
*(esp_2 - 0x14) = ebp_2 - 0x2c
sub_40972c("mmmm d, yyyy", 0x20, eax)
void* ebp_3 = sub_409a64(*(ebp_2 - 0x2c), ebp_2 - 0x28)
sub_403a40(&data_414690, *(ebp_3 - 0x28))
int32_t ecx_12
ecx_12.b = 0x3a
data_414694 = sub_409778(eax, 0x1e, ecx_12)
*(esp_2 - 0x14) = ebp_3 - 0x30
sub_40972c(&data_40b0f4, 0x28, eax)
sub_403a40(&data_414698, *(ebp_3 - 0x30))
void* esp_19
*esp_19 = ebp_3 - 0x34
sub_40972c(&data_40b100, 0x29, eax)
sub_403a40(&data_41469c, *(ebp_3 - 0x34))
sub_4039ec(ebp_3 - 8)
sub_4039ec(ebp_3 - 0xc)
*esp_19 = ebp_3 - 0x38
int32_t ecx_16 = sub_40972c(&data_40b0c0, 0x25, eax)
*(ebp_3 - 0x38)

if (sub_406c2c(ecx_16, 0) != 0)
    sub_403a84(ebp_3 - 4, 0x40b118)
else
    sub_403a84(ebp_3 - 4, 0x40b10c)

*esp_19 = ebp_3 - 0x3c
int32_t ecx_18 = sub_40972c(&data_40b0c0, 0x23, eax)
void* esp_26 = esp_19 + 4
*(ebp_3 - 0x3c)

if (sub_406c2c(ecx_18, 0) == 0)
    *(esp_26 - 4) = ebp_3 - 0x40
    int32_t ecx_20 = sub_40972c(&data_40b0c0, 0x1005, eax)
    *(ebp_3 - 0x40)
    
    if (sub_406c2c(ecx_20, 0) != 0)
        sub_403a84(ebp_3 - 8, "AMPM ")
    else
        sub_403a84(ebp_3 - 0xc, " AMPM")

*(esp_26 - 4) = *(ebp_3 - 8)
*(esp_26 - 8) = *(ebp_3 - 4)
*(esp_26 - 0xc) = &data_40b144
*(esp_26 - 0x10) = *(ebp_3 - 0xc)
sub_403d48(&data_4146a0, 4)
*(esp_26 - 4) = *(ebp_3 - 8)
*(esp_26 - 8) = *(ebp_3 - 4)
*(esp_26 - 0xc) = ":mm:ss"
*(esp_26 - 0x10) = *(ebp_3 - 0xc)
sub_403d48(&data_4146a4, 4)
int32_t ecx_21
ecx_21.b = 0x2c
data_41474e = sub_409778(eax, 0xc, ecx_21)
*(esp_26 + 8)
fsbase->NtTib.ExceptionList = *esp_26
*(esp_26 + 8) = sub_40b0b2
return sub_403a10(ebp_3 - 0x40, 0x10)
