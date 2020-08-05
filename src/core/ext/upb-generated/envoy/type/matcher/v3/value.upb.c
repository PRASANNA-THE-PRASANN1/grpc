/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/value.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/type/matcher/v3/value.upb.h"
#include "envoy/type/matcher/v3/number.upb.h"
#include "envoy/type/matcher/v3/string.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_type_matcher_v3_ValueMatcher_submsgs[4] = {
  &envoy_type_matcher_v3_DoubleMatcher_msginit,
  &envoy_type_matcher_v3_ListMatcher_msginit,
  &envoy_type_matcher_v3_StringMatcher_msginit,
  &envoy_type_matcher_v3_ValueMatcher_NullMatch_msginit,
};

static const upb_msglayout_field envoy_type_matcher_v3_ValueMatcher__fields[6] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 3, 11, 1},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, 1},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 8, 1},
  {5, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 8, 1},
  {6, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
};

const upb_msglayout envoy_type_matcher_v3_ValueMatcher_msginit = {
  &envoy_type_matcher_v3_ValueMatcher_submsgs[0],
  &envoy_type_matcher_v3_ValueMatcher__fields[0],
  UPB_SIZE(8, 16), 6, false,
};

const upb_msglayout envoy_type_matcher_v3_ValueMatcher_NullMatch_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

static const upb_msglayout *const envoy_type_matcher_v3_ListMatcher_submsgs[1] = {
  &envoy_type_matcher_v3_ValueMatcher_msginit,
};

static const upb_msglayout_field envoy_type_matcher_v3_ListMatcher__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
};

const upb_msglayout envoy_type_matcher_v3_ListMatcher_msginit = {
  &envoy_type_matcher_v3_ListMatcher_submsgs[0],
  &envoy_type_matcher_v3_ListMatcher__fields[0],
  UPB_SIZE(8, 16), 1, false,
};

#include "upb/port_undef.inc"

