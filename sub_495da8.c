// 函数: sub_495da8
// 地址: 0x495da8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_40 = ebx
int32_t esi
int32_t var_44 = esi
int32_t edi
int32_t var_48 = edi
int32_t var_2c = *arg4
void var_28
void* edi_1 = &var_28
void* esi_2 = &arg4[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
int32_t var_1c = *arg1
int32_t var_18
int32_t* edi_5 = &var_18
void* esi_7 = &arg1[1]
*edi_5 = *esi_7
void* edi_6 = &edi_5[1]
void* esi_8 = esi_7 + 4
*edi_6 = *esi_8
*(edi_6 + 4) = *(esi_8 + 4)
void* result
int32_t* esp_1
int32_t* var_4c

if (*(arg3 + 0x1e) == 0 || *(arg3 + 0x1c) == 0)
    var_4c = &var_1c
    void var_3c
    int32_t var_14
    int32_t var_10
    sub_418a64(var_14 - var_1c, 0, 0, &var_3c, var_10 - var_18)
    sub_42c124(sub_430bec(arg2), &var_3c, sub_430bec(arg5), var_4c)
    esp_1 = &var_48
    int32_t edx_1
    
    if (*(arg3 + 0x20) != 0)
        var_4c = &var_2c
        esp_1 = &var_4c
        edx_1, ebp_1 = sub_493a2c(arg5, &var_2c, arg5, var_4c)
    
    if (*(ebp_1[-1] + 0x22) != 0)
        *(esp_1 - 4) = &ebp_1[-0xa]
        esp_1 -= 4
        edx_1, ebp_1 = sub_493c28(ebp_1[3], &ebp_1[-0xa], ebp_1[3])
    
    if (*(ebp_1[-1] + 0x1f) != 0)
        *(esp_1 - 4) = &ebp_1[-0xa]
        sub_493834(ebp_1[3], &ebp_1[-0xa], ebp_1[3])
    
    if (*(ebp_1[-1] + 0x1d) != 0)
        *(esp_1 - 4) = &ebp_1[-0xa]
        sub_4940a4(ebp_1[3], &ebp_1[-0xa], ebp_1[3])
    
    uint32_t eax_24 = zx.d(*(ebp_1[-1] + 0x28))
    
    if (eax_24.w != 0)
        *(esp_1 - 4) = &ebp_1[-0xa]
        *(esp_1 - 8) = eax_24
        sub_4941c0(ebp_1[3], &ebp_1[-0xa], ebp_1[3])
    
    if (*(*(*(ebp_1[-1] + 0x18) + 0x2c) + 0x20) != 0)
        edx_1.b = 1
        ebp_1[-2] = sub_430618(sub_42a104+0x140, edx_1)
        *(esp_1 - 4) = ebp_1
        *(esp_1 - 8) = j_sub_40443c
        TEB* fsbase
        *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_1 - 0xc
        ebp_1[-4] - ebp_1[-6]
        (*(*ebp_1[-2] + 0x40))()
        ebp_1[-3] - ebp_1[-5]
        (*(*ebp_1[-2] + 0x34))()
        sub_431d30(ebp_1[-2], 6)
        *(esp_1 - 0x10) = 0xffffff
        sub_42c714(sub_430bec(ebp_1[-2]), &ebp_1[-0xe])
        *(esp_1 - 0x14) = &ebp_1[-0xe]
        int32_t eax_37 = sub_430bec(ebp_1[-2])
        sub_494bac(*(esp_1 - 0x14), eax_37, *(*(ebp_1[-1] + 0x18) + 0x2c))
        sub_431d30(ebp_1[-2], 6)
        *(esp_1 - 0x10) = &ebp_1[-0xa]
        *(esp_1 - 0x14) = ebp_1[3]
        *(esp_1 - 0x18) = *(*(ebp_1[-1] + 0x18) + 0x1c)
        *(esp_1 - 0x1c) = &ebp_1[-0xa]
        ebp_1[-2]
        sub_493e80(ebp_1[3])
        *(esp_1 - 4)
        fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
        *(esp_1 - 4) = 0x495f94
        return sub_403c68(ebp_1[-2])
    
    result = ebp_1[-1]
    
    if (*(result + 0x1e) != 0)
        result = ebp_1[-1]
        
        if (*(result + 0x1c) == 0)
            (*(*ebp_1[3] + 0x2c))()
            (*(**(ebp_1[-1] + 0x24) + 0x40))()
            (*(*ebp_1[3] + 0x20))()
            (*(**(ebp_1[-1] + 0x24) + 0x34))()
            *(esp_1 - 4) = ebp_1[3]
            sub_42c1ac(0, 0, sub_430bec(*(ebp_1[-1] + 0x24)))
            result = ebp_1[-1]
            *(result + 0x1c) = 1
else
    var_4c = *(arg3 + 0x24)
    result = sub_42c1ac(0, 0, sub_430bec(arg5), var_4c)
    esp_1 = &var_48
*esp_1
esp_1[1]
esp_1[2]
*ebp_1
return result
