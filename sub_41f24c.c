// 函数: sub_41f24c
// 地址: 0x41f24c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* i_2 = arg3
int32_t* esp_1 = &i_2
int32_t* i_1 = 5
int32_t* i

do
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0
    esp_1 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t* i_3 = i_2
i_2 = i_1
int32_t* i_4 = i_3
int32_t entry_ebx
*(esp_1 - 4) = entry_ebx
int32_t* i_5 = i_4
i_2 = arg1
*(esp_1 - 8) = &var_4
*(esp_1 - 0xc) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0x10) = fsbase->NtTib.ExceptionList
void* esp_6 = esp_1 - 0x10
fsbase->NtTib.ExceptionList = esp_6

if (i_5[2] == 0)
    if (***i_5 != 7)
        i_4 = sub_41da44(data_4ac350)
    else if (sub_403df4(sub_4162ec(arg2, i_5), &data_418674) == 0)
        i_4 = sub_41da44(data_4ac350)
    else
        int32_t eax_8
        eax_8, i_4 = sub_4162ec(arg2, i_5)
        
        if ((*(eax_8 + 0x24) & 4) == 0)
            i_4 = sub_41da44(data_4ac350)

char* ebx = **i_5

switch (zx.d(*ebx))
    case 1
        char eax_14
        int32_t ecx
        eax_14, ecx = sub_41e028(i_2)
        
        if (eax_14 != 7)
            sub_416360(arg2, i_5, sub_41ec34(i_2))
        else
            int64_t* var_1c
            sub_41eb38(i_2, &var_1c, ecx)
            sub_41f0a8(arg2, i_5)
    case 2
        sub_416360(arg2, i_5, zx.d(sub_41e0e8(i_2)))
    case 3
        int64_t* var_20
        sub_41eb38(i_2, &var_20, i_4)
        sub_416360(arg2, i_5, sub_416194(ebx, var_20))
    case 4
        int32_t ecx_6
        int80_t st0_1
        st0_1, ecx_6 = sub_41e9e4(i_2)
        *(esp_6 - 0xc) = st0_1
        sub_416a6c(ecx_6, i_5, arg2)
    case 5, 0xa
        void var_24
        ebp_1 = sub_41fa14(i_2, &var_24)
        esp_6 += 0x18
        ebp_1[-2]
        sub_416764(ebp_1[-8], ebp_1[-3])
    case 6
        int32_t* eax_37
        eax_37, ebp_1 = sub_41f8f8(i_2, ebx)
        sub_416360(ebp_1[-2], ebp_1[-3], eax_37)
    case 7
        char eax_40
        int32_t ecx_10
        eax_40, ecx_10 = sub_41e028(i_2)
        
        if (eax_40 == 0xd)
            sub_41fbb4(ecx_10)
            sub_416360(arg2, i_5, 0)
        else if (eax_40 == 0xe)
            sub_41fbb4(ecx_10)
            int32_t* eax_45 = sub_4162ec(arg2, i_5)
            sub_41e1a4(i_2, eax_45)
        else
            *(esp_6 - 4) = &var_4
            int64_t* var_2c
            sub_41eb38(i_2, &var_2c, ecx_10)
            sub_41f0f0(arg2, i_5, var_2c)
            *(esp_6 - 4)
    case 8
        char eax_50
        int32_t ecx_13
        eax_50, ecx_13 = sub_41e028(i_2)
        
        if (eax_50 != 0xd)
            int32_t var_18
            *(esp_6 - 4) = &var_18
            int64_t* var_30
            sub_41eb38(i_2, &var_30, ecx_13)
            i_2[6]
            (*(*i_2 + 0x18))()
            esp_6 += 0x18
            
            if (var_18 != 0)
                sub_416d38(arg2, i_5, &var_18)
        else
            sub_41fbb4(ecx_13)
            sub_416d38(arg2, i_5, &data_4aab74[4])
    case 9
        int16_t eax_24
        eax_24, ebp_1 = sub_41e148(i_2)
        sub_416360(ebp_1[-2], ebp_1[-3], zx.d(eax_24))
    case 0xb
        PWSTR var_28
        sub_41fad0(i_2, &var_28)
        ebp_1 = sub_41687c(arg2, i_5, var_28)
    case 0xc
        *(esp_6 - 4) = &var_4
        ebp_1 = sub_41f130()
        *(esp_6 - 4)
    case 0xf
        *(esp_6 - 4) = &var_4
        ebp_1 = sub_41f18c()
        *(esp_6 - 4)
    case 0x10
        int32_t eax_58
        int32_t ecx_17
        int32_t edx_26
        eax_58, ecx_17, edx_26 = sub_41eca0(i_2)
        *(esp_6 - 4) = edx_26
        *(esp_6 - 8) = eax_58
        sub_416d98(ecx_17, i_5, arg2)

*(esp_6 + 8)
fsbase->NtTib.ExceptionList = *esp_6
*(esp_6 + 8) = sub_41f55f
sub_404bac(&ebp_1[-0xb], 2)
sub_405368(&ebp_1[-9])
return sub_404bac(&ebp_1[-8], 3)
