// 函数: sub_42e0e4
// 地址: 0x42e0e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t var_10 = 0
int32_t var_14 = 0
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t* esp_1 = &var_1c
int32_t eax

if (arg2.b != 0)
    void var_2c
    esp_1 = &var_2c
    eax = sub_403fcc(0, arg2)

*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_1 - 0xc
sub_403c38(0, 0)
esp_1[0xc] = 0
esp_1[0xb] = &data_42a100
sub_406a30(data_4ac258, &var_8)
void* ebp_1 = sub_42e264(eax, &data_42e1f0, var_8)
esp_1[0xa] = 0
esp_1[9] = &data_42a100
sub_406a30(data_4ac040, ebp_1 - 8)
void* ebp_2 = sub_42e264(eax, &data_42e1fc, *(ebp_1 - 8))
esp_1[8] = 0
esp_1[7] = 0x42a38c
sub_406a30(data_4ac03c, ebp_2 - 0xc)
void* ebp_3 = sub_42e264(eax, &data_42e208, *(ebp_2 - 0xc))
esp_1[6] = 0
esp_1[5] = 0x42a244
sub_406a30(data_4ac034, ebp_3 - 0x10)
void* ebp_4 = sub_42e264(eax, &data_42e214, *(ebp_3 - 0x10))
esp_1[7]
fsbase->NtTib.ExceptionList = esp_1[5]
esp_1[7] = sub_42e1c8
return sub_404bac(ebp_4 - 0x10, 4)
