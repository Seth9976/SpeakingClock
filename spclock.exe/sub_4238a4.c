// 函数: sub_4238a4
// 地址: 0x4238a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* esi = arg2
void** ebx = arg1
int32_t result = sub_404fb0(ebx[2], esi)
int32_t __saved_edi

if (&__saved_edi == 8)
    return result

if (esi != 0)
    char eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_409228(esi, 0)
    
    if (eax_2 == 0)
        char* var_14 = esi
        int32_t var_10
        var_10.b = 0xb
        edx_1.b = 1
        int32_t eax_3
        eax_3, ebx, esi = sub_40cfa8(sub_41759c+0x48, edx_1, data_4ac204, 0, &var_14)
        sub_40451c(eax_3)

int32_t* edi_1 = ebx[1]

if (edi_1 == 0)
    ebx[2]
    (*(*ebx + 0x20))(esi)
else
    ebx[2]
    (*(*edi_1 + 0x20))(esi)

sub_423a28(ebx, 0)
sub_423934(ebx, esi)
return sub_423a28(ebx, 1)
