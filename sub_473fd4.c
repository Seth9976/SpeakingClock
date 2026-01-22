// 函数: sub_473fd4
// 地址: 0x473fd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
sub_403c68(arg1[0x20])
sub_403c68(arg1[0x22])
sub_403c68(arg1[0x21])
sub_403c68(arg1[0x15])
sub_403c68(arg1[0x14])
sub_403c68(arg1[0x13])
sub_403c68(arg1[0xc])
sub_403c68(arg1[0xd])
sub_403c68(arg1[0x1f])
void* eax_9 = arg1[0x16]

if (eax_9 != 0)
    int32_t esi_2 = *(eax_9 + 8) - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_403c68(sub_41a0f4(arg1[0x16], edi_1))
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

sub_403c68(arg1[0x16])
sub_474294(arg1)
void* eax_14 = data_4ac090
*eax_14 = 0
*(eax_14 + 4) = 0
void* eax_15 = data_4ac0a0
*eax_15 = 0
*(eax_15 + 4) = 0
int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_423380(arg1, edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
