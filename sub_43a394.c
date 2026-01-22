// 函数: sub_43a394
// 地址: 0x43a394
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi = arg1
void* eax
int32_t ecx
int32_t edx
eax, ecx, edx = sub_4659bc()
char eax_1 = sub_465ac4(eax)
char eax_2

if (eax_1 != 0)
    eax_2, edx = sub_433cec(ecx)

uint32_t ebx

if (eax_1 == 0 || eax_2 == 0 || (edi[7].b & 0x10) != 0)
    ebx = 0
else
    ebx.b = 1

if (ebx.b != 0)
    edx.b = 1
    int32_t* eax_4 = sub_46bf14(edi)
    uint32_t eax_10
    
    if (eax_4 == 0)
        eax_10 = 0
    else if (sub_478924(sub_478638(eax_4)) == 0)
        eax_10 = 0
    else if (sub_47895c(sub_478638(eax_4), edi).b != 0)
        eax_10.b = 1
    else
        eax_10 = 0
    
    ebx = eax_10

int32_t* esi = edi[0x64]
(*(*edi + 0x44))()
int32_t* var_30
int32_t lprc

if (sub_43a6ac(edi) == 0)
    sub_42bbb0(esi[5], edi[0x1c])
    sub_42bcec(esi[5], 0)
    
    if (ebx.b != 0)
        sub_43a308(edi[0x64], &lprc)
    else
        sub_42c258(esi, &lprc)
else if (ebx.b != 0)
    var_30 = 4
    var_30 = GetStockObject(var_30)
    FillRect(sub_42c73c(esi), &lprc, var_30)

sub_42bcec(esi[5], 1)
uint32_t ebx_3 = zx.d(*((zx.d(*(edi + 0x19f)) << 1) + &data_4aaf94)) | 0x40
    | zx.d(*((zx.d(edi[0x67].b) << 1) + &data_4aaf8c))

if (*(edi + 0x19e) != 0)
    var_30 = edi
    int32_t lprc_1 = lprc
    void var_18
    void* edi_1 = &var_18
    void var_28
    void* esi_1 = &var_28
    *edi_1 = *esi_1
    void* edi_2 = edi_1 + 4
    void* esi_2 = esi_1 + 4
    *edi_2 = *esi_2
    *(edi_2 + 4) = *(esi_2 + 4)
    edi = var_30
    esi.w = 0xffc5
    sub_403e64(edi, esi, &lprc_1, ebx_3 | 0x400)
    int32_t var_10
    
    if (*(edi + 0x19e) != 2)
        int32_t eax_28 = edi[0x13] - var_10
        int32_t eax_29 = eax_28 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_28 s>> 1 s< 0)
            eax_29 = adc.d(eax_29, 0, c_1)
        
        var_30 = eax_29
        OffsetRect(&lprc, 0, var_30)
    else
        var_30 = edi[0x13] - var_10
        OffsetRect(&lprc, 0, var_30)

esi.w = 0xffc5
return sub_403e64(edi, esi, &lprc, ebx_3)
