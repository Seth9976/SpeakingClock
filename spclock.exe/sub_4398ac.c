// 函数: sub_4398ac
// 地址: 0x4398ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t i_1 = 0x13
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
*(esp_2 - 4) = i_1
int32_t entry_ebx
*(esp_2 - 8) = entry_ebx
*(esp_2 - 0xc) = arg2
*(esp_2 - 0x10) = arg3
*(esp_2 - 0x14) = &var_4
*(esp_2 - 0x18) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x1c
int32_t* edi = arg1[0x94]
arg1[0x1a]
sub_42c630(edi)
char eax_2
int32_t ecx
eax_2, ecx = sub_46665c(arg1)
int32_t var_a0
int32_t var_7c
int32_t var_74
int32_t var_70
int32_t var_64
void* esp_41

if (eax_2 == 0)
    int32_t eax_44 = sub_42c58c(edi, sub_439caf+5)
    *(esp_2 - 0x20) = arg1[0x13]
    RECT var_30
    *(esp_2 - 0x24) = &var_30
    int32_t edx_14 = eax_44 s>> 1
    bool c_1 = unimplemented  {sar edx, 0x1}
    
    if (eax_44 s>> 1 s< 0)
        edx_14 = adc.d(edx_14, 0, c_1)
    
    sub_418a64(arg1[0x12], edx_14 - 1, 0)
    esp_41 = esp_2 - 0x1c
    
    if (*(arg1 + 0x1d9) == 0)
        sub_42bbb0(edi[5], 0xff000006)
    else
        var_30.left += 1
        var_30.top += 1
        sub_42bbb0(edi[5], 0xff000014)
        sub_42c294(edi, &var_30)
        *(esp_41 - 4) = 0xffffffff
        *(esp_41 - 8) = 0xffffffff
        *(esp_41 - 0xc) = &var_30
        OffsetRect()
        sub_42bbb0(edi[5], 0xff000010)
    
    sub_4577d8(sub_42c294(edi, &var_30), &var_7c)
    
    if (var_7c != 0)
        arg2.w = 0xffc7
        char eax_54
        int32_t ecx_14
        eax_54, ecx_14 = sub_403e64(arg1, arg2)
        void* esp_55
        
        if (eax_54 != 0)
            *(esp_41 - 4) = eax_44
            int32_t var_8c
            *(esp_41 - 8) = &var_8c
            int32_t var_90
            sub_4577d8(ecx_14, &var_90)
            *(esp_41 - 0xc) = sub_42c570(arg1[0x94], var_90)
            sub_418a64(0, 0, var_30.right - *(esp_41 - 0xc) - 8)
            *(esp_41 - 4) = edi
            var_30.left = var_8c
            var_2c
            void* edi_1 = &var_2c
            void var_88
            int32_t* esi_2 = &var_88
            *edi_1 = *esi_2
            void* edi_2 = edi_1 + 4
            void* esi_3 = &esi_2[1]
            *edi_2 = *esi_3
            *(edi_2 + 4) = *(esi_3 + 4)
            edi = *(esp_41 - 4)
            esp_55 = esp_41
        else
            *(esp_41 - 4) = eax_44
            *(esp_41 - 8) = &var_30
            sub_418a64(0, 0, 8)
            esp_55 = esp_41
        
        int32_t eax_65 = sub_45a198(arg1, 0x20)
        int32_t eax_67
        int32_t ecx_17
        eax_67, ecx_17 = sub_42c73c(edi)
        int32_t var_94
        int32_t ecx_18 = sub_4577d8(ecx_17, &var_94)
        int32_t esi_6 = var_94
        
        if (esi_6 != 0)
            esi_6 = *(esi_6 - 4)
        
        *(esp_55 - 4) = eax_65 | 0x400
        *(esp_55 - 8) = &var_30
        *(esp_55 - 0xc) = esi_6
        int32_t var_98
        sub_4577d8(ecx_18, &var_98)
        *(esp_55 - 0x10) = sub_405018(var_98)
        *(esp_55 - 0x14) = eax_67
        DrawTextA()
        sub_42bbb0(edi[5], arg1[0x1c])
        int32_t eax_78
        int32_t ecx_19
        eax_78, ecx_19 = sub_42c73c(edi)
        int32_t var_9c
        int32_t ecx_20 = sub_4577d8(ecx_19, &var_9c)
        int32_t esi_8 = var_9c
        
        if (esi_8 != 0)
            esi_8 = *(esi_8 - 4)
        
        *(esp_55 - 4) = eax_65
        *(esp_55 - 8) = &var_30
        *(esp_55 - 0xc) = esi_8
        sub_4577d8(ecx_20, &var_a0)
        *(esp_55 - 0x10) = sub_405018(var_a0)
        *(esp_55 - 0x14) = eax_78
        DrawTextA()
        esp_41 = esp_55
else
    int32_t var_60
    sub_4577d8(ecx, &var_60)
    int32_t var_40
    int32_t var_38
    void* esp_21
    
    if (var_60 == 0)
        *(esp_2 - 0x20) = 0
        *(esp_2 - 0x24) = &var_40
        sub_418a64(0, 0, 0)
        esp_21 = esp_2 - 0x1c
    else
        int32_t eax_5
        int32_t ecx_1
        eax_5, ecx_1 = sub_42c73c(edi)
        int32_t ecx_2 = sub_4577d8(ecx_1, &var_64)
        int32_t esi = var_64
        
        if (esi != 0)
            esi = *(esi - 4)
        
        int32_t var_14
        *(esp_2 - 0x20) = &var_14
        *(esp_2 - 0x24) = esi
        int32_t var_6c
        sub_4577d8(ecx_2, &var_6c)
        *(esp_2 - 0x28) = sub_405018(var_6c)
        *(esp_2 - 0x2c) = eax_5
        GetTextExtentPoint32A()
        int32_t var_10
        *(esp_2 - 0x20) = var_10
        *(esp_2 - 0x24) = &var_40
        sub_418a64(var_14, 0, 0)
        esi.w = 0xffc7
        
        if (sub_403e64(arg1, esi) != 0)
            *(esp_2 - 0x20) = 0
            *(esp_2 - 0x24) = arg1[0x12] - 8 - var_38
            *(esp_2 - 0x28) = &var_40
            OffsetRect()
            esp_21 = esp_2 - 0x1c
        else
            *(esp_2 - 0x20) = 0
            *(esp_2 - 0x24) = 8
            *(esp_2 - 0x28) = &var_40
            OffsetRect()
            esp_21 = esp_2 - 0x1c
    
    (*(*arg1 + 0x44))()
    int32_t var_3c
    int32_t var_34
    int32_t eax_22 = var_34 - var_3c
    int32_t eax_23 = eax_22 s>> 1
    bool c = unimplemented  {sar eax, 0x1}
    
    if (eax_22 s>> 1 s< 0)
        eax_23 = adc.d(eax_23, 0, c)
    
    int32_t var_4c_1 = eax_23
    *(esp_21 + 0x1c) = var_34
    *(esp_21 + 0x18) = var_38
    *(esp_21 + 0x14) = var_3c
    *(esp_21 + 0x10) = var_40
    *(esp_21 + 0xc) = sub_42c73c(edi)
    ExcludeClipRect()
    char var_15_1
    
    if ((*(*arg1 + 0x50))() == 0)
        var_15_1 = 0x1c
    else
        var_15_1 = 0x1b
    
    sub_4659bc()
    void var_5c
    sub_465d2c(&var_5c, zx.d(var_15_1))
    void var_50
    *(esp_21 + 0x1c) = &var_50
    *(esp_21 + 0x18) = 0
    *(esp_21 + 0x14) = sub_42c73c(edi)
    int32_t eax_34 = sub_4659bc()
    sub_465bd0(&var_5c, *(esp_21 + 0x14), eax_34)
    *(esp_21 + 0x1c) = 0
    *(esp_21 + 0x18) = sub_42c73c(edi)
    esp_41 = esp_21 + 0x20
    int32_t ecx_9 = sub_4577d8(SelectClipRgn(), &var_70)
    
    if (var_70 != 0)
        uint8_t* var_78
        sub_4054c8(sub_4577d8(ecx_9, &var_78), var_78)
        *(esp_41 - 4) = var_74
        *(esp_41 - 8) = &var_40
        *(esp_41 - 0xc) = 0
        *(esp_41 - 0x10) = 0
        *(esp_41 - 0x14) = sub_42c73c(edi)
        int32_t eax_42 = sub_4659bc()
        sub_465cc4(&var_5c, *(esp_41 - 0x14), eax_42)

*(esp_41 + 8)
fsbase->NtTib.ExceptionList = *esp_41
*(esp_41 + 8) = sub_439ca3
sub_404bac(&var_a0, 5)
sub_404bac(&var_7c, 2)
sub_405368(&var_74)
sub_404bac(&var_70, 2)
return sub_404bac(&var_64, 2)
