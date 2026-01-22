// 函数: sub_447144
// 地址: 0x447144
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t* ebp_1 = &var_4
int32_t i_1 = 0x2c
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
int32_t edx
int32_t var_14 = edx
*(esp_2 - 0x10) = &var_4
*(esp_2 - 0x14) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
void* esp_8 = esp_2 - 0x18
fsbase->NtTib.ExceptionList = esp_8

if (*data_4ac120 s< 6)
    void var_130
    sub_403b48(*arg1, &var_130)
    void* var_30 = &var_130
    char var_2c_1 = 4
    *(esp_8 - 4) = &var_30
    *(esp_8 - 8) = 0
    void* edx_1
    edx_1.b = 1
    int32_t eax_4
    eax_4, ebp_1 = sub_40cfa8(0x443f38, edx_1, data_4ac234)
    sub_40451c(eax_4)

*(ebp_1 - 0x11) = 0
(*(*ebp_1[-3] + 0x30))()
sub_406568(ebp_1[-3] + 0x3c, ebp_1[-0x4c])

if (*(ebp_1[-3] + 0x3c) == 0)
    *(esp_8 + 0x24)
    fsbase->NtTib.ExceptionList = *(esp_8 + 0x1c)
    *(esp_8 + 0x24) = 0x44760a
    sub_405368(&ebp_1[-0x58])
    sub_405e78(&ebp_1[-0x57], 0x433e38)
    sub_405380(&ebp_1[-0x56], 6)
    sub_406550(&ebp_1[-0x4c])
    sub_406550(&ebp_1[-2])
    sub_406550(&ebp_1[-1])
    return &ebp_1[-1]

*(esp_8 + 0x18) = ebp_1
*(esp_8 + 0x14) = j_sub_40443c
*(esp_8 + 0x10) = fsbase->NtTib.ExceptionList
void* esp_14 = esp_8 + 0x10
fsbase->NtTib.ExceptionList = esp_14
int32_t ecx_2 = sub_406568(&ebp_1[-2], *(ebp_1[-3] + 0x3c))

if (*(ebp_1[-3] + 0x30) != 0)
    ebp_1 = sub_408bd4(*(ebp_1[-3] + 0x30), &ebp_1[-0x50])
    *(esp_14 - 4) = &ebp_1[-0x50]
    int32_t* eax_14 = ebp_1[-2]
    *(esp_14 - 8) = eax_14
    ecx_2 = (*(*eax_14 + 0x60))()

if (*(ebp_1[-3] + 0x34) != 0)
    sub_4054c8(ecx_2, *(ebp_1[-3] + 0x34))
    *(esp_14 - 4) = sub_4054d8(ebp_1[-0x51])
    int32_t* eax_20 = ebp_1[-2]
    *(esp_14 - 8) = eax_20
    ecx_2 = (*(*eax_20 + 0x58))()

if (*(ebp_1[-3] + 0x44) != 0)
    sub_4054c8(ecx_2, *(ebp_1[-3] + 0x44))
    *(esp_14 - 4) = sub_4054d8(ebp_1[-0x52])
    int32_t* eax_26 = ebp_1[-2]
    *(esp_14 - 8) = eax_26
    ecx_2 = (*(*eax_26 + 0x3c))()

if (*(ebp_1[-3] + 0x48) != 0)
    sub_4054c8(ecx_2, *(ebp_1[-3] + 0x48))
    *(esp_14 - 4) = sub_4054d8(ebp_1[-0x53])
    int32_t* eax_32 = ebp_1[-2]
    *(esp_14 - 8) = eax_32
    ecx_2 = (*(*eax_32 + 0x4c))()

if (*(ebp_1[-3] + 0x5c) != 0)
    sub_4054c8(ecx_2, *(ebp_1[-3] + 0x5c))
    *(esp_14 - 4) = sub_4054d8(ebp_1[-0x54])
    int32_t* eax_38 = ebp_1[-2]
    *(esp_14 - 8) = eax_38
    ecx_2 = (*(*eax_38 + 0x48))()

if (*(ebp_1[-3] + 0x6c) != 0)
    sub_4054c8(ecx_2, *(ebp_1[-3] + 0x6c))
    *(esp_14 - 4) = sub_4054d8(ebp_1[-0x55])
    int32_t* eax_44 = ebp_1[-2]
    *(esp_14 - 8) = eax_44
    (*(*eax_44 + 0x44))()

if (*(ebp_1[-3] + 0x38) != 0)
    sub_406550(&ebp_1[-1])
    *(esp_14 - 4) = &ebp_1[-1]
    int32_t ecx_3
    ecx_3, ebp_1 = sub_408bd4("{43826d1e-e718-42ee-bc55-a1e261c37bfe}", &ebp_1[-0x50])
    *(esp_14 - 8) = &ebp_1[-0x50]
    sub_4054c8(ecx_3, *(ebp_1[-3] + 0x38))
    int32_t eax_51 = sub_4054d8(ebp_1[-0x56])
    int32_t eax_52
    eax_52.b = (sub_433e9c(*(esp_14 - 8), 0, eax_51) & 0x80000000) == 0
    
    if (eax_52.b != 0)
        *(esp_14 - 4) = ebp_1[-1]
        int32_t* eax_54 = ebp_1[-2]
        *(esp_14 - 8) = eax_54
        (*(*eax_54 + 0x30))()

if (sub_41ae58(*(ebp_1[-3] + 0x54)) s> 0)
    sub_446b54(*(ebp_1[-3] + 0x54))
    *(esp_14 - 4) = ebp_1[-0x57]
    *(esp_14 - 8) = sub_41ae58(*(ebp_1[-3] + 0x54))
    int32_t* eax_66 = *(ebp_1[-3] + 0x3c)
    *(esp_14 - 0xc) = eax_66
    (*(*eax_66 + 0x10))()
    *(esp_14 - 4) = *(ebp_1[-3] + 0x50)
    int32_t* eax_70 = ebp_1[-2]
    *(esp_14 - 8) = eax_70
    (*(*eax_70 + 0x14))()

int32_t esi = 0
int32_t eax_73 = 0
int32_t edi = 0x4ab5e0

do
    bool c_1 = eax_73.b u< 0x1f
    
    if (eax_73.b == 0x1f || c_1)
        c_1 = test_bit(*(ebp_1[-3] + 0x60), eax_73 & 0x7f)
    
    if (c_1)
        esi |= *edi
    
    eax_73 += 1
    edi += 4
while (eax_73.b != 0x15)

*(esp_14 - 4) = esi
int32_t* eax_74 = ebp_1[-2]
*(esp_14 - 8) = eax_74
(*(*eax_74 + 0x24))()
ebp_1[-9] = sub_446c64(*(ebp_1[-3] + 0x40))
*(esp_14 + 8) = ebp_1
*(esp_14 + 4) = j_sub_40443c
*esp_14 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_14

while (sub_446c20(ebp_1[-9]) != 0)
    void* eax_80 = sub_446c14(ebp_1[-9])
    sub_406550(&ebp_1[-1])
    *(esp_14 - 4) = &ebp_1[-1]
    int32_t ecx_7
    ecx_7, ebp_1 = sub_408bd4("{43826d1e-e718-42ee-bc55-a1e261c37bfe}", &ebp_1[-0x50])
    *(esp_14 - 8) = &ebp_1[-0x50]
    sub_4054c8(ecx_7, *(eax_80 + 0xc))
    int32_t eax_85 = sub_4054d8(ebp_1[-0x58])
    
    if ((sub_433e9c(*(esp_14 - 8), 0, eax_85) & 0x80000000) == 0)
        *(esp_14 - 4) = 0
        *(esp_14 - 8) = ebp_1[-1]
        int32_t* eax_88 = ebp_1[-2]
        *(esp_14 - 0xc) = eax_88
        (*(*eax_88 + 0x54))()

int32_t ecx_9 = *(esp_14 + 8)
fsbase->NtTib.ExceptionList = *esp_14
*(esp_14 + 8) = sub_4474ae

if (ebp_1[-9] == 0)
    return 0

int32_t edx_26
edx_26.b = 1
ebp_1[-9]
return sub_403c58(ecx_9, edx_26)
