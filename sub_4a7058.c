// 函数: sub_4a7058
// 地址: 0x4a7058
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t i_1 = 0xc
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
*(esp_2 - 8) = arg2
*(esp_2 - 0xc) = arg3
*(esp_2 - 0x10) = &var_4
*(esp_2 - 0x14) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x18
sub_404bdc(arg1 + 0x454, "000000000000")

if (*(arg1 + 0x44c) != 0)
    *j_sub_40502c(arg1 + 0x454) = 0x31

if (*(arg1 + 0x444) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 1) = 0x31

if (*(arg1 + 0x449) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 2) = 0x31

if (*(arg1 + 0x440) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 3) = 0x31

if (*(arg1 + 0x441) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 4) = 0x31

if (*(arg1 + 0x445) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 5) = 0x31

if (*(arg1 + 0x448) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 6) = 0x31

if (*(arg1 + 0x447) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 7) = 0x31

if (*(arg1 + 0x446) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 8) = 0x31

if (*(arg1 + 0x44f) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 9) = 0x31

if (*(arg1 + 0x501) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 0xa) = 0x31

if (*(arg1 + 0x450) != 0)
    *(j_sub_40502c(arg1 + 0x454) + 0xb) = 0x31

int32_t ecx = sub_404b88(arg1 + 0x458)
sub_46e140(arg1)
int32_t var_8
sub_409340(ecx, &var_8)
int32_t ecx_2
void* esp_12

if (sub_46e140(arg1) s< 0)
    int32_t eax_30 = var_8
    int32_t esi_2 = eax_30
    
    if (esi_2 != 0)
        esi_2 = *(esi_2 - 4)
    
    int32_t edi = eax_30
    
    if (edi != 0)
        edi = *(edi - 4)
    
    *(esp_2 - 0x1c) = *(arg1 + 0x458)
    *(esp_2 - 0x20) = &data_4a7818
    eax_30.b = 0x30
    int32_t var_14
    sub_40530c(eax_30.b, 4 - esi_2, &var_14)
    *(esp_2 - 0x24) = var_14
    int32_t var_18
    *(esp_2 - 0x28) = &var_18
    sub_405080(edi, 2, var_8)
    *(esp_2 - 0x28) = var_18
    ecx_2 = sub_404f1c(arg1 + 0x458, 4)
    esp_12 = esp_2 - 0x1c
else
    int32_t esi = var_8
    
    if (esi != 0)
        esi = *(esi - 4)
    
    *(esp_2 - 0x1c) = *(arg1 + 0x458)
    int32_t eax_28
    eax_28.b = 0x30
    void* var_10
    sub_40530c(eax_28.b, 4 - esi, &var_10)
    *(esp_2 - 0x20) = var_10
    *(esp_2 - 0x24) = var_8
    ecx_2 = sub_404f1c(arg1 + 0x458, 3)
    esp_12 = esp_2 - 0x18

sub_46e120(arg1)
sub_409340(ecx_2, &var_8)
void* esp_22

if (sub_46e120(arg1) s< 0)
    int32_t eax_37 = var_8
    int32_t esi_6 = eax_37
    
    if (esi_6 != 0)
        esi_6 = *(esi_6 - 4)
    
    int32_t edi_2 = eax_37
    
    if (edi_2 != 0)
        edi_2 = *(edi_2 - 4)
    
    *(esp_12 - 4) = *(arg1 + 0x458)
    *(esp_12 - 8) = &data_4a7818
    eax_37.b = 0x30
    int32_t var_20
    sub_40530c(eax_37.b, 4 - esi_6, &var_20)
    *(esp_12 - 0xc) = var_20
    int32_t var_24
    *(esp_12 - 0x10) = &var_24
    sub_405080(edi_2, 2, var_8)
    *(esp_12 - 0x10) = var_24
    sub_404f1c(arg1 + 0x458, 4)
    esp_22 = esp_12 - 4
else
    int32_t esi_4 = var_8
    
    if (esi_4 != 0)
        esi_4 = *(esi_4 - 4)
    
    *(esp_12 - 4) = *(arg1 + 0x458)
    int32_t eax_35
    eax_35.b = 0x30
    void* var_1c
    sub_40530c(eax_35.b, 4 - esi_4, &var_1c)
    *(esp_12 - 8) = var_1c
    *(esp_12 - 0xc) = var_8
    sub_404f1c(arg1 + 0x458, 3)
    esp_22 = esp_12

int32_t eax_40 = *(arg1 + 0x430)
*(esp_22 - 4) = 0
*(esp_22 - 8) = eax_40
sub_40942c(&var_8)
int32_t esi_8 = var_8

if (esi_8 != 0)
    esi_8 = *(esi_8 - 4)

*(esp_22 - 4) = *(arg1 + 0x458)
int32_t* eax_41
eax_41.b = 0x30
void* var_28
sub_40530c(eax_41.b, 4 - esi_8, &var_28)
*(esp_22 - 8) = var_28
*(esp_22 - 0xc) = var_8
sub_404f1c(arg1 + 0x458, 3)
int32_t eax_43 = *(arg1 + 0x434)
*(esp_22 - 4) = 0
*(esp_22 - 8) = eax_43
sub_40942c(&var_8)
int32_t esi_10 = var_8

if (esi_10 != 0)
    esi_10 = *(esi_10 - 4)

*(esp_22 - 4) = *(arg1 + 0x458)
int32_t* eax_44
eax_44.b = 0x30
void* var_2c
sub_40530c(eax_44.b, 4 - esi_10, &var_2c)
*(esp_22 - 8) = var_2c
*(esp_22 - 0xc) = var_8
int32_t ecx_10 = sub_404f1c(arg1 + 0x458, 3)
*(arg1 + 0x424)
sub_409340(ecx_10, &var_8)
int32_t esi_12 = var_8

if (esi_12 != 0)
    esi_12 = *(esi_12 - 4)

*(esp_22 - 4) = *(arg1 + 0x458)
int32_t var_30
sub_40530c(0x30, 4 - esi_12, &var_30)
*(esp_22 - 8) = var_30
*(esp_22 - 0xc) = var_8
sub_404f1c(arg1 + 0x458, 3)
int32_t ecx_12 = sub_404b88(arg1 + 0x45c)
*(arg1 + 0x410)
sub_409340(ecx_12, &var_8)
int32_t esi_14 = var_8

if (esi_14 != 0)
    esi_14 = *(esi_14 - 4)

*(esp_22 - 4) = *(arg1 + 0x45c)
int32_t var_34
sub_40530c(0x30, 2 - esi_14, &var_34)
*(esp_22 - 8) = var_34
*(esp_22 - 0xc) = var_8
int32_t ecx_14 = sub_404f1c(arg1 + 0x45c, 3)
*(arg1 + 0x408)
sub_409340(ecx_14, &var_8)
int32_t esi_16 = var_8

if (esi_16 != 0)
    esi_16 = *(esi_16 - 4)

*(esp_22 - 4) = *(arg1 + 0x45c)
int32_t var_38
sub_40530c(0x30, 2 - esi_16, &var_38)
*(esp_22 - 8) = var_38
*(esp_22 - 0xc) = var_8
int32_t ecx_16 = sub_404f1c(arg1 + 0x45c, 3)
*(arg1 + 0x40c)
sub_409340(ecx_16, &var_8)
int32_t esi_18 = var_8

if (esi_18 != 0)
    esi_18 = *(esi_18 - 4)

*(esp_22 - 4) = *(arg1 + 0x45c)
int32_t var_3c
sub_40530c(0x30, 2 - esi_18, &var_3c)
*(esp_22 - 8) = var_3c
*(esp_22 - 0xc) = var_8
int32_t ecx_18 = sub_404f1c(arg1 + 0x45c, 3)
*(arg1 + 0x503)
sub_409340(ecx_18, &var_8)
int32_t esi_20 = var_8

if (esi_20 != 0)
    esi_20 = *(esi_20 - 4)

*(esp_22 - 4) = *(arg1 + 0x45c)
int32_t var_40
sub_40530c(0x30, 2 - esi_20, &var_40)
*(esp_22 - 8) = var_40
*(esp_22 - 0xc) = var_8
int32_t ecx_20 = sub_404f1c(arg1 + 0x45c, 3)
*(arg1 + 0x414)
sub_409340(ecx_20, &var_8)
int32_t esi_22 = var_8

if (esi_22 != 0)
    esi_22 = *(esi_22 - 4)

*(esp_22 - 4) = *(arg1 + 0x45c)
int32_t var_44
sub_40530c(0x30, 2 - esi_22, &var_44)
*(esp_22 - 8) = var_44
*(esp_22 - 0xc) = var_8
int32_t ecx_22 = sub_404f1c(arg1 + 0x45c, 3)
*(arg1 + 0x428)
sub_409340(ecx_22, &var_8)
int32_t esi_24 = var_8

if (esi_24 != 0)
    esi_24 = *(esi_24 - 4)

*(esp_22 - 4) = *(arg1 + 0x45c)
int32_t var_48
sub_40530c(0x30, 2 - esi_24, &var_48)
*(esp_22 - 8) = var_48
*(esp_22 - 0xc) = var_8
int32_t ecx_24 = sub_404f1c(arg1 + 0x45c, 3)
*(arg1 + 0x42c)
sub_409340(ecx_24, &var_8)
int32_t esi_26 = var_8

if (esi_26 != 0)
    esi_26 = *(esi_26 - 4)

*(esp_22 - 4) = *(arg1 + 0x45c)
int32_t var_4c
sub_40530c(0x30, 2 - esi_26, &var_4c)
*(esp_22 - 8) = var_4c
*(esp_22 - 0xc) = var_8
sub_404f1c(arg1 + 0x45c, 3)
int32_t edx_26
edx_26.b = 1
int32_t* eax_71 = sub_428a78(sub_42891c+0xa8, edx_26)
*(esp_22 - 4) = &var_4
*(esp_22 - 8) = j_sub_40443c
*(esp_22 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_22 - 0xc
sub_428b18(eax_71, 0x80000001)
eax_71[6] = 0xf003f
void* ebp_1 = sub_428b80(eax_71, "\Software\Lux Aeterna\Speaking Clock Lite", 1)
sub_4290ec(*(ebp_1 - 8), "BinSettings", *(arg1 + 0x454))
sub_4290ec(*(ebp_1 - 8), "LNumSettings", *(arg1 + 0x458))
sub_4290ec(*(ebp_1 - 8), "SNumSettings", *(arg1 + 0x45c))
int32_t ecx_31 = sub_4290ec(*(ebp_1 - 8), "WaveFileName", data_4b1df4)
data_4b1e24
sub_409340(ecx_31, ebp_1 - 0x4c)
sub_4290ec(*(ebp_1 - 8), "SelLang", *(ebp_1 - 0x4c))
sub_4032cc(0, ebp_1 - 0x54)
sub_409ae8(*(ebp_1 - 0x54), ebp_1 - 0x50)
sub_4290ec(*(ebp_1 - 8), sub_4a78bf+5, *(ebp_1 - 0x50))
void* ebp_2

if (*(arg1 + 0x445) == 0)
    char eax_93
    void* ebp_3
    eax_93, ebp_3 = sub_428b80(*(ebp_1 - 8), "\software\microsoft\windows\currentversion\run", 0)
    
    if (eax_93 != 0)
        sub_428fec(*(ebp_3 - 8), "Speaking Clock Lite")
    
    char eax_96
    eax_96, ebp_2 = sub_428b80(*(ebp_3 - 8), "\software\microsoft\windows nt\currentversion\run", 0)
    
    if (eax_96 != 0)
        sub_428fec(*(ebp_2 - 8), "Speaking Clock Lite")
else
    char eax_84
    eax_84, ebp_2 = sub_428b80(*(ebp_1 - 8), "\software\microsoft\windows\currentversion\run", 0)
    
    if (eax_84 == 0)
        char eax_87
        eax_87, ebp_2 =
            sub_428b80(*(ebp_2 - 8), "\software\microsoft\windows nt\currentversion\run", 0)
        
        if (eax_87 == 0)
            char eax_90
            eax_90, ebp_2 =
                sub_428b80(*(ebp_2 - 8), "\software\microsoft\windows\currentversion\run", 1)
            
            if (eax_90 != 0)
                sub_4032cc(0, ebp_2 - 0x60)
                sub_4290ec(*(ebp_2 - 8), "Speaking Clock Lite", *(ebp_2 - 0x60))
        else
            sub_4032cc(0, ebp_2 - 0x5c)
            sub_4290ec(*(ebp_2 - 8), "Speaking Clock Lite", *(ebp_2 - 0x5c))
    else
        sub_4032cc(0, ebp_2 - 0x58)
        sub_4290ec(*(ebp_2 - 8), "Speaking Clock Lite", *(ebp_2 - 0x58))

*(esp_22 - 4)
fsbase->NtTib.ExceptionList = *(esp_22 - 0xc)
*(esp_22 - 4) = sub_4a77c7
sub_428ae8(*(ebp_2 - 8))
return sub_403c68(*(ebp_2 - 8))
