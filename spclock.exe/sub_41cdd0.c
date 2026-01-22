// 函数: sub_41cdd0
// 地址: 0x41cdd0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t edi
int32_t var_34 = edi
int32_t* esp_1 = &var_34
void* var_24 = nullptr
void* var_28 = nullptr
void* var_1c = nullptr
void* var_20 = nullptr

if (arg2.b != 0)
    void var_44
    esp_1 = &var_44
    arg1 = sub_403fcc(arg3, arg2)

int64_t* esi_1 = arg3
char var_5 = arg2.b
int32_t* ebx_1 = arg1
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
void* esp_4 = esp_1 - 0xc
fsbase->NtTib.ExceptionList = esp_4
void* var_18

if (arg4 != 0xffff)
    sub_41ccc8(ebx_1, 0, sub_40970c(esi_1, zx.d(arg4)))
    
    if (ebx_1[1] s< 0)
        sub_409b9c(esi_1, &var_24)
        var_18 = var_24
        char var_14_2 = 0xb
        sub_40c69c(GetLastError(), &var_28)
        void* var_10_2 = var_28
        char var_c_2 = 0xb
        *(esp_4 - 4) = &var_18
        *(esp_4 - 8) = 1
        int32_t edx_6
        edx_6.b = 1
        int32_t eax_18
        eax_18, ebx_1, ebp_1, esi_1 = sub_40cfa8(0x4172bc, edx_6, data_4abf88)
        sub_40451c(eax_18)
else
    *(esp_4 - 4) = 0
    *(esp_4 - 8) = 0x80
    *(esp_4 - 0xc) = 2
    *(esp_4 - 0x10) = 0
    *(esp_4 - 0x14) = 0
    *(esp_4 - 0x18) = 0xc0000000
    *(esp_4 - 0x1c) = sub_405018(esi_1)
    sub_41ccc8(ebx_1, 0, CreateFileA())
    
    if (ebx_1[1] s< 0)
        sub_409b9c(esi_1, &var_1c)
        var_18 = var_1c
        char var_14_1 = 0xb
        sub_40c69c(GetLastError(), &var_20)
        void* var_10_1 = var_20
        char var_c_1 = 0xb
        *(esp_4 - 4) = &var_18
        *(esp_4 - 8) = 1
        int32_t edx_2
        edx_2.b = 1
        int32_t eax_9
        eax_9, ebx_1, ebp_1, esi_1 = sub_40cfa8(0x417260, edx_2, data_4ac4d4)
        sub_40451c(eax_9)
sub_404bdc(&ebx_1[2], esi_1)
*(esp_4 + 8)
fsbase->NtTib.ExceptionList = *esp_4
*(esp_4 + 8) = sub_41cf1f
return sub_404bac(&ebp_1[-9], 4)
