# Phala  3.1167.x

## System

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Fill block |    | :heavy_check_mark: | :heavy_check_mark: | `Perbill` ratio <br/> |
|Remark |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` remark <br/> |
|Set heap pages |    | :heavy_check_mark: | :heavy_check_mark: | `u64` pages <br/> |
|Set code |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` code <br/> |
|Set code without checks |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` code <br/> |
|Set storage |    | :heavy_check_mark: |   | `VecKeyValue` items <br/> |
|Kill storage |    | :heavy_check_mark: | :heavy_check_mark: | `VecKey` keys <br/> |
|Kill prefix |    | :heavy_check_mark: | :heavy_check_mark: | `Key` prefix <br/>`u32` subkeys <br/> |
|Remark with event |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` remark <br/> |

## Timestamp

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set |    |   |   | `Compactu64` now <br/> |

## Utility

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Batch |    |   |   | `VecCall` calls <br/> |
|As derivative |    |   |   | `u16` index <br/>`Call` call <br/> |
|Batch all |    |   |   | `VecCall` calls <br/> |
|Dispatch as |    |   |   | `BoxPalletsOrigin` as_origin <br/>`Call` call <br/> |
|Force batch |    |   |   | `VecCall` calls <br/> |
|Batch try |    |   |   | `VecCall` calls <br/> |

## Multisig

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|As multi threshold 1 |    |   |   | `VecAccountId` other_signatories <br/>`Call` call <br/> |
|As multi |    |   |   | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`OptionTimepoint` maybe_timepoint <br/>`OpaqueCall` call <br/>`bool` store_call <br/>`Weight` max_weight <br/> |
|Approve as multi |    |   |   | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`OptionTimepoint` maybe_timepoint <br/>`H256` call_hash <br/>`Weight` max_weight <br/> |
|Cancel as multi |    |   |   | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`Timepoint` timepoint <br/>`H256` call_hash <br/> |

## Proxy

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Proxy |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` real <br/>`OptionProxyType` force_proxy_type <br/>`Call` call <br/> |
|Add proxy |    | :heavy_check_mark: |   | `AccountId` delegate <br/>`ProxyType` proxy_type <br/>`BlockNumber` delay <br/> |
|Remove proxy |    | :heavy_check_mark: |   | `AccountId` delegate <br/>`ProxyType` proxy_type <br/>`BlockNumber` delay <br/> |
|Remove proxies |    | :heavy_check_mark: |   |  |
|Anonymous |    | :heavy_check_mark: |   | `ProxyType` proxy_type <br/>`BlockNumber` delay <br/>`u16` index <br/> |
|Kill anonymous |    | :heavy_check_mark: |   | `AccountId` spawner <br/>`ProxyType` proxy_type <br/>`u16` index <br/>`Compactu32` height <br/>`Compactu32` ext_index <br/> |
|Announce |    | :heavy_check_mark: |   | `AccountId` real <br/>`CallHashOf` call_hash <br/> |
|Remove announcement |    | :heavy_check_mark: |   | `AccountId` real <br/>`CallHashOf` call_hash <br/> |
|Reject announcement |    | :heavy_check_mark: |   | `AccountId` delegate <br/>`CallHashOf` call_hash <br/> |
|Proxy announced |    | :heavy_check_mark: |   | `AccountId` delegate <br/>`AccountId` real <br/>`OptionProxyType` force_proxy_type <br/>`Call` call <br/> |

## Vesting

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Vest |    |   |   |  |
|Vest other |    |   |   | `LookupasStaticLookupSource` target <br/> |
|Vested transfer |    |   |   | `LookupasStaticLookupSource` target <br/>`VestingInfo` schedule <br/> |
|Force vested transfer |    |   |   | `LookupasStaticLookupSource` source <br/>`LookupasStaticLookupSource` target <br/>`VestingInfo` schedule <br/> |
|Merge schedules |    |   |   | `u32` schedule1_index <br/>`u32` schedule2_index <br/> |

## Scheduler

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Schedule |    |   |   | `BlockNumber` when <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`BoxCallOrHashOfT` call <br/> |
|Cancel |    |   |   | `BlockNumber` when <br/>`u32` index <br/> |
|Schedule named |    |   |   | `Vecu8` id <br/>`BlockNumber` when <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`BoxCallOrHashOfT` call <br/> |
|Cancel named |    |   |   | `Vecu8` id <br/> |
|Schedule after |    |   |   | `BlockNumber` after <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`BoxCallOrHashOfT` call <br/> |
|Schedule named after |    |   |   | `Vecu8` id <br/>`BlockNumber` after <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`BoxCallOrHashOfT` call <br/> |

## Preimage

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Note preimage |    |   |   | `Vecu8` bytes <br/> |
|Unnote preimage |    |   |   | `Hash` hash <br/> |
|Request preimage |    |   |   | `Hash` hash <br/> |
|Unrequest preimage |    |   |   | `Hash` hash <br/> |

## ParachainSystem

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set validation data |    |   |   | `ParachainInherentData` data <br/> |
|Sudo send upward message |    |   |   | `UpwardMessage` message <br/> |
|Authorize upgrade |    |   |   | `Hash` code_hash <br/> |
|Enact authorized upgrade |    |   |   | `Vecu8` code <br/> |

## XcmpQueue

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Service overweight |    |   |   | `OverweightIndex` index <br/>`Weight` weight_limit <br/> |
|Suspend xcm execution |    |   |   |  |
|Resume xcm execution |    |   |   |  |
|Update suspend threshold |    |   |   | `u32` new_ <br/> |
|Update drop threshold |    |   |   | `u32` new_ <br/> |
|Update resume threshold |    |   |   | `u32` new_ <br/> |
|Update threshold weight |    |   |   | `Weight` new_ <br/> |
|Update weight restrict decay |    |   |   | `Weight` new_ <br/> |
|Update xcmp max individual weight |    |   |   | `Weight` new_ <br/> |

## DmpQueue

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Service overweight |    |   |   | `OverweightIndex` index <br/>`Weight` weight_limit <br/> |

## PolkadotXcm

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Send |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedXcmTuple` message <br/> |
|Teleport assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/> |
|Reserve transfer assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/> |
|Execute |    |   |   | `BoxVersionedXcmTasSysConfigCall` message <br/>`Weight` max_weight <br/> |
|Force xcm version |    |   |   | `BoxMultiLocation` location <br/>`XcmVersion` xcm_version <br/> |
|Force default xcm version |    |   |   | `OptionXcmVersion` maybe_xcm_version <br/> |
|Force subscribe version notify |    |   |   | `BoxVersionedMultiLocation` location <br/> |
|Force unsubscribe version notify |    |   |   | `BoxVersionedMultiLocation` location <br/> |
|Limited reserve transfer assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/>`WeightLimit` weight_limit <br/> |
|Limited teleport assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/>`WeightLimit` weight_limit <br/> |

## Balances

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Transfer | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` dest <br/>`CompactBalance` amount <br/> |
|Set balance |    | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` who <br/>`CompactBalance` new_free <br/>`CompactBalance` new_reserved <br/> |
|Force transfer | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` source <br/>`LookupasStaticLookupSource` dest <br/>`CompactBalance` amount <br/> |
|Transfer keep alive | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` dest <br/>`CompactBalance` amount <br/> |
|Transfer all | :heavy_check_mark:  | :heavy_check_mark: |   | `LookupasStaticLookupSource` dest <br/>`bool` keep_alive <br/> |
|Force unreserve |    | :heavy_check_mark: |   | `LookupasStaticLookupSource` who <br/>`Balance` amount <br/> |

## Assets

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Create |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` admin <br/>`Balance` min_balance <br/> |
|Force create |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` owner <br/>`bool` is_sufficient <br/>`Compactu128` min_balance <br/> |
|Destroy |    |   |   | `Compactu32` id <br/>`DestroyWitness` witness <br/> |
|Mint |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` beneficiary <br/>`Compactu128` amount <br/> |
|Burn |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` who <br/>`Compactu128` amount <br/> |
|Transfer |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` target <br/>`Compactu128` amount <br/> |
|Transfer keep alive |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` target <br/>`Compactu128` amount <br/> |
|Force transfer |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` source <br/>`LookupasStaticLookupSource` dest <br/>`Compactu128` amount <br/> |
|Freeze |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` who <br/> |
|Thaw |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` who <br/> |
|Freeze asset |    |   |   | `Compactu32` id <br/> |
|Thaw asset |    |   |   | `Compactu32` id <br/> |
|Transfer ownership |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` owner <br/> |
|Set team |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` issuer <br/>`LookupasStaticLookupSource` admin <br/>`LookupasStaticLookupSource` freezer <br/> |
|Set metadata |    |   |   | `Compactu32` id <br/>`Vecu8` name <br/>`Vecu8` symbol <br/>`u8` decimals <br/> |
|Clear metadata |    |   |   | `Compactu32` id <br/> |
|Force set metadata |    |   |   | `Compactu32` id <br/>`Vecu8` name <br/>`Vecu8` symbol <br/>`u8` decimals <br/>`bool` is_frozen <br/> |
|Force clear metadata |    |   |   | `Compactu32` id <br/> |
|Force asset status |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` owner <br/>`LookupasStaticLookupSource` issuer <br/>`LookupasStaticLookupSource` admin <br/>`LookupasStaticLookupSource` freezer <br/>`Compactu128` min_balance <br/>`bool` is_sufficient <br/>`bool` is_frozen <br/> |
|Approve transfer |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` delegate <br/>`Compactu128` amount <br/> |
|Cancel approval |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` delegate <br/> |
|Force cancel approval |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` owner <br/>`LookupasStaticLookupSource` delegate <br/> |
|Transfer approved |    |   |   | `Compactu32` id <br/>`LookupasStaticLookupSource` owner <br/>`LookupasStaticLookupSource` destination <br/>`Compactu128` amount <br/> |
|Touch |    |   |   | `Compactu32` id <br/> |
|Refund |    |   |   | `Compactu32` id <br/>`bool` allow_burn <br/> |

## Authorship

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set uncles |    |   |   | `VecHeader` new_uncles <br/> |

## CollatorSelection

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set invulnerables |    |   |   | `VecAccountId` new_ <br/> |
|Set desired candidates |    |   |   | `u32` max <br/> |
|Set candidacy bond |    |   |   | `Balance` bond <br/> |
|Register as candidate |    |   |   |  |
|Leave intent |    |   |   |  |

## Session

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set keys |    |   |   | `Keys` keys <br/>`Bytes` proof <br/> |
|Purge keys |    |   |   |  |

## Identity

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add registrar |    |   |   | `AccountId` account <br/> |
|Set identity |    |   |   | `BoxIdentityInfoMaxAdditionalFields` info <br/> |
|Set subs |    |   |   | `VecTupleAccountIdData` subs <br/> |
|Clear identity |    |   |   |  |
|Request judgement |    |   |   | `Compactu32` reg_index <br/>`Compactu128` max_fee <br/> |
|Cancel request |    |   |   | `RegistrarIndex` reg_index <br/> |
|Set fee |    |   |   | `Compactu32` index <br/>`Compactu128` fee <br/> |
|Set account id |    |   |   | `Compactu32` index <br/>`AccountId` new_ <br/> |
|Set fields |    |   |   | `Compactu32` index <br/>`IdentityFields` fields <br/> |
|Provide judgement |    |   |   | `Compactu32` reg_index <br/>`LookupasStaticLookupSource` target <br/>`JudgementBalanceOfT` judgement <br/> |
|Kill identity |    |   |   | `LookupasStaticLookupSource` target <br/> |
|Add sub |    |   |   | `LookupasStaticLookupSource` sub <br/>`Data` data <br/> |
|Rename sub |    |   |   | `LookupasStaticLookupSource` sub <br/>`Data` data <br/> |
|Remove sub |    |   |   | `LookupasStaticLookupSource` sub <br/> |
|Quit sub |    |   |   |  |

## Democracy

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Propose |    |   |   | `Hash` proposal_hash <br/>`CompactBalance` amount <br/> |
|Second |    |   |   | `Compactu32` proposal <br/>`Compactu32` seconds_upper_bound <br/> |
|Vote |    |   |   | `Compactu32` ref_index <br/>`AccountVote` vote <br/> |
|Emergency cancel |    |   |   | `ReferendumIndex` ref_index <br/> |
|External propose |    |   |   | `Hash` proposal_hash <br/> |
|External propose majority |    |   |   | `Hash` proposal_hash <br/> |
|External propose default |    |   |   | `Hash` proposal_hash <br/> |
|Fast track |    |   |   | `Hash` proposal_hash <br/>`BlockNumber` voting_period <br/>`BlockNumber` delay <br/> |
|Veto external |    |   |   | `Hash` proposal_hash <br/> |
|Cancel referendum |    |   |   | `Compactu32` ref_index <br/> |
|Cancel queued |    |   |   | `ReferendumIndex` which <br/> |
|Delegate |    |   |   | `AccountId` to <br/>`Conviction` conviction <br/>`Balance` balance <br/> |
|Undelegate |    |   |   |  |
|Clear public proposals |    |   |   |  |
|Note preimage |    |   |   | `Bytes` encoded_proposal <br/> |
|Note preimage operational |    |   |   | `Bytes` encoded_proposal <br/> |
|Note imminent preimage |    |   |   | `Bytes` encoded_proposal <br/> |
|Note imminent preimage operational |    |   |   | `Bytes` encoded_proposal <br/> |
|Reap preimage |    |   |   | `Hash` proposal_hash <br/>`Compactu32` proposal_len_upper_bound <br/> |
|Unlock |    |   |   | `AccountId` target <br/> |
|Remove vote |    |   |   | `ReferendumIndex` index <br/> |
|Remove other vote |    |   |   | `AccountId` target <br/>`ReferendumIndex` index <br/> |
|Enact proposal |    |   |   | `Hash` proposal_hash <br/>`ReferendumIndex` index <br/> |
|Blacklist |    |   |   | `Hash` proposal_hash <br/>`OptionReferendumIndex` maybe_ref_index <br/> |
|Cancel proposal |    |   |   | `Compactu32` prop_index <br/> |

## Council

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set members |    |   |   | `VecAccountId` new_members <br/>`OptionAccountId` prime <br/>`MemberCount` old_count <br/> |
|Execute |    |   |   | `Proposal` proposal <br/>`Compactu32` length_bound <br/> |
|Propose |    |   |   | `Compactu32` threshold <br/>`Proposal` proposal <br/>`Compactu32` length_bound <br/> |
|Vote |    |   |   | `Hash` proposal <br/>`Compactu32` index <br/>`bool` approve <br/> |
|Close |    |   |   | `Hash` proposal_hash <br/>`Compactu32` index <br/>`Compactu64` proposal_weight_bound <br/>`Compactu32` length_bound <br/> |
|Disapprove proposal |    |   |   | `Hash` proposal_hash <br/> |

## Treasury

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Propose spend |    |   |   | `CompactBalance` amount <br/>`LookupasStaticLookupSource` beneficiary <br/> |
|Reject proposal |    |   |   | `Compactu32` proposal_id <br/> |
|Approve proposal |    |   |   | `Compactu32` proposal_id <br/> |
|Spend |    |   |   | `CompactBalance` amount <br/>`LookupasStaticLookupSource` beneficiary <br/> |
|Remove approval |    |   |   | `Compactu32` proposal_id <br/> |

## Bounties

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Propose bounty |    |   |   | `CompactBalance` amount <br/>`Bytes` description <br/> |
|Approve bounty |    |   |   | `Compactu32` bounty_id <br/> |
|Propose curator |    |   |   | `Compactu32` bounty_id <br/>`LookupasStaticLookupSource` curator <br/>`CompactBalance` fee <br/> |
|Unassign curator |    |   |   | `Compactu32` bounty_id <br/> |
|Accept curator |    |   |   | `Compactu32` bounty_id <br/> |
|Award bounty |    |   |   | `Compactu32` bounty_id <br/>`LookupasStaticLookupSource` beneficiary <br/> |
|Claim bounty |    |   |   | `Compactu32` bounty_id <br/> |
|Close bounty |    |   |   | `Compactu32` bounty_id <br/> |
|Extend bounty expiry |    |   |   | `Compactu32` bounty_id <br/>`Bytes` remark <br/> |

## Lottery

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Buy ticket |    |   |   | `Call` call <br/> |
|Set calls |    |   |   | `VecCall` calls <br/> |
|Start lottery |    |   |   | `Balance` price <br/>`BlockNumber` length <br/>`BlockNumber` delay <br/>`bool` repeat <br/> |
|Stop repeat |    |   |   |  |

## TechnicalCommittee

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set members |    |   |   | `VecAccountId` new_members <br/>`OptionAccountId` prime <br/>`MemberCount` old_count <br/> |
|Execute |    |   |   | `Proposal` proposal <br/>`Compactu32` length_bound <br/> |
|Propose |    |   |   | `Compactu32` threshold <br/>`Proposal` proposal <br/>`Compactu32` length_bound <br/> |
|Vote |    |   |   | `Hash` proposal <br/>`Compactu32` index <br/>`bool` approve <br/> |
|Close |    |   |   | `Hash` proposal_hash <br/>`Compactu32` index <br/>`Compactu64` proposal_weight_bound <br/>`Compactu32` length_bound <br/> |
|Disapprove proposal |    |   |   | `Hash` proposal_hash <br/> |

## TechnicalMembership

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add member |    |   |   | `AccountId` who <br/> |
|Remove member |    |   |   | `AccountId` who <br/> |
|Swap member |    |   |   | `AccountId` remove <br/>`AccountId` add <br/> |
|Reset members |    |   |   | `VecAccountId` members <br/> |
|Change key |    |   |   | `AccountId` new_ <br/> |
|Set prime |    |   |   | `AccountId` who <br/> |
|Clear prime |    |   |   |  |

## PhragmenElection

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Vote |    |   |   | `VecAccountId` votes <br/>`Compactu128` amount <br/> |
|Remove voter |    |   |   |  |
|Submit candidacy |    |   |   | `Compactu32` candidate_count <br/> |
|Renounce candidacy |    |   |   | `Renouncing` renouncing <br/> |
|Remove member |    |   |   | `LookupasStaticLookupSource` who <br/>`bool` has_replacement <br/> |
|Clean defunct voters |    |   |   | `u32` num_voters <br/>`u32` num_defunct <br/> |

## Tips

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Report awesome |    |   |   | `Bytes` reason <br/>`AccountId` who <br/> |
|Retract tip |    |   |   | `Hash` hash <br/> |
|Tip new |    |   |   | `Bytes` reason <br/>`AccountId` who <br/>`Compactu128` tip_value <br/> |
|Tip |    |   |   | `Hash` hash <br/>`Compactu128` tip_value <br/> |
|Close tip |    |   |   | `Hash` hash <br/> |
|Slash tip |    |   |   | `Hash` hash <br/> |

## ChildBounties

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add child bounty |    |   |   | `Compactu32` parent_bounty_id <br/>`CompactBalance` amount <br/>`Vecu8` description <br/> |
|Propose curator |    |   |   | `Compactu32` parent_bounty_id <br/>`Compactu32` child_bounty_id <br/>`LookupasStaticLookupSource` curator <br/>`CompactBalance` fee <br/> |
|Accept curator |    |   |   | `Compactu32` parent_bounty_id <br/>`Compactu32` child_bounty_id <br/> |
|Unassign curator |    |   |   | `Compactu32` parent_bounty_id <br/>`Compactu32` child_bounty_id <br/> |
|Award child bounty |    |   |   | `Compactu32` parent_bounty_id <br/>`Compactu32` child_bounty_id <br/>`LookupasStaticLookupSource` beneficiary <br/> |
|Claim child bounty |    |   |   | `Compactu32` parent_bounty_id <br/>`Compactu32` child_bounty_id <br/> |
|Close child bounty |    |   |   | `Compactu32` parent_bounty_id <br/>`Compactu32` child_bounty_id <br/> |

## ChainBridge

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set threshold |    |   |   | `u32` threshold <br/> |
|Whitelist chain |    |   |   | `BridgeChainId` id <br/> |
|Add relayer |    |   |   | `AccountId` v <br/> |
|Remove relayer |    |   |   | `AccountId` v <br/> |
|Update fee |    |   |   | `u128` fee <br/>`BridgeChainId` dest_id <br/> |
|Acknowledge proposal |    |   |   | `DepositNonce` nonce <br/>`BridgeChainId` src_id <br/>`H256` r_id <br/>`BoxTasConfigProposal` call <br/> |
|Reject proposal |    |   |   | `DepositNonce` nonce <br/>`BridgeChainId` src_id <br/>`H256` r_id <br/>`BoxTasConfigProposal` call <br/> |
|Eval vote state |    |   |   | `DepositNonce` nonce <br/>`BridgeChainId` src_id <br/>`BoxTasConfigProposal` prop <br/> |
|Handle fungible transfer |    |   |   | `Vecu8` dest <br/>`Balance` amount <br/>`H256` rid <br/> |

## XTransfer

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Transfer |    |   |   | `BoxMultiAsset` asset <br/>`BoxMultiLocation` dest <br/>`OptionWeight` dest_weight <br/> |
|Transfer generic |    |   |   | `BoxVecu8` data <br/>`BoxMultiLocation` dest <br/>`OptionWeight` dest_weight <br/> |

## AssetsRegistry

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Force withdraw fund |    |   |   | `OptionAssetId` asset_id <br/>`AccountId` recipient <br/>`u128` amount <br/> |
|Force register asset |    |   |   | `MultiLocation` location <br/>`AssetId` asset_id <br/>`AssetProperties` properties <br/> |
|Force unregister asset |    |   |   | `AssetId` asset_id <br/> |
|Force set metadata |    |   |   | `AssetId` asset_id <br/>`AssetProperties` properties <br/> |
|Force mint |    |   |   | `AssetId` asset_id <br/>`AccountId` beneficiary <br/>`Taspallet_assetsConfigBalance` amount <br/> |
|Force burn |    |   |   | `AssetId` asset_id <br/>`AccountId` who <br/>`Taspallet_assetsConfigBalance` amount <br/> |
|Force set price |    |   |   | `AssetId` asset_id <br/>`u128` execution_price <br/> |
|Force set location |    |   |   | `AssetId` asset_id <br/>`MultiLocation` location <br/> |
|Force enable chainbridge |    |   |   | `AssetId` asset_id <br/>`u8` chain_id <br/>`bool` is_mintable <br/>`BoxVecu8` metadata <br/> |
|Force disable chainbridge |    |   |   | `AssetId` asset_id <br/>`u8` chain_id <br/> |

