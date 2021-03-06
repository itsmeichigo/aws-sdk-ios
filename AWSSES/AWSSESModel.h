//
// Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import <AWSCore/AWSNetworking.h>
#import <AWSCore/AWSModel.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const AWSSESErrorDomain;

typedef NS_ENUM(NSInteger, AWSSESErrorType) {
    AWSSESErrorUnknown,
    AWSSESErrorAlreadyExists,
    AWSSESErrorCannotDelete,
    AWSSESErrorInvalidLambdaFunction,
    AWSSESErrorInvalidPolicy,
    AWSSESErrorInvalidS3Configuration,
    AWSSESErrorInvalidSnsTopic,
    AWSSESErrorLimitExceeded,
    AWSSESErrorMailFromDomainNotVerified,
    AWSSESErrorMessageRejected,
    AWSSESErrorRuleDoesNotExist,
    AWSSESErrorRuleSetDoesNotExist,
};

typedef NS_ENUM(NSInteger, AWSSESBehaviorOnMXFailure) {
    AWSSESBehaviorOnMXFailureUnknown,
    AWSSESBehaviorOnMXFailureUseDefaultValue,
    AWSSESBehaviorOnMXFailureRejectMessage,
};

typedef NS_ENUM(NSInteger, AWSSESBounceType) {
    AWSSESBounceTypeUnknown,
    AWSSESBounceTypeDoesNotExist,
    AWSSESBounceTypeMessageTooLarge,
    AWSSESBounceTypeExceededQuota,
    AWSSESBounceTypeContentRejected,
    AWSSESBounceTypeUndefined,
    AWSSESBounceTypeTemporaryFailure,
};

typedef NS_ENUM(NSInteger, AWSSESCustomMailFromStatus) {
    AWSSESCustomMailFromStatusUnknown,
    AWSSESCustomMailFromStatusPending,
    AWSSESCustomMailFromStatusSuccess,
    AWSSESCustomMailFromStatusFailed,
    AWSSESCustomMailFromStatusTemporaryFailure,
};

typedef NS_ENUM(NSInteger, AWSSESDsnAction) {
    AWSSESDsnActionUnknown,
    AWSSESDsnActionFailed,
    AWSSESDsnActionDelayed,
    AWSSESDsnActionDelivered,
    AWSSESDsnActionRelayed,
    AWSSESDsnActionExpanded,
};

typedef NS_ENUM(NSInteger, AWSSESIdentityType) {
    AWSSESIdentityTypeUnknown,
    AWSSESIdentityTypeEmailAddress,
    AWSSESIdentityTypeDomain,
};

typedef NS_ENUM(NSInteger, AWSSESInvocationType) {
    AWSSESInvocationTypeUnknown,
    AWSSESInvocationTypeEvent,
    AWSSESInvocationTypeRequestResponse,
};

typedef NS_ENUM(NSInteger, AWSSESNotificationType) {
    AWSSESNotificationTypeUnknown,
    AWSSESNotificationTypeBounce,
    AWSSESNotificationTypeComplaint,
    AWSSESNotificationTypeDelivery,
};

typedef NS_ENUM(NSInteger, AWSSESReceiptFilterPolicy) {
    AWSSESReceiptFilterPolicyUnknown,
    AWSSESReceiptFilterPolicyBlock,
    AWSSESReceiptFilterPolicyAllow,
};

typedef NS_ENUM(NSInteger, AWSSESSNSActionEncoding) {
    AWSSESSNSActionEncodingUnknown,
    AWSSESSNSActionEncodingUtf8,
    AWSSESSNSActionEncodingBase64,
};

typedef NS_ENUM(NSInteger, AWSSESStopScope) {
    AWSSESStopScopeUnknown,
    AWSSESStopScopeRuleSet,
};

typedef NS_ENUM(NSInteger, AWSSESTlsPolicy) {
    AWSSESTlsPolicyUnknown,
    AWSSESTlsPolicyRequire,
    AWSSESTlsPolicyOptional,
};

typedef NS_ENUM(NSInteger, AWSSESVerificationStatus) {
    AWSSESVerificationStatusUnknown,
    AWSSESVerificationStatusPending,
    AWSSESVerificationStatusSuccess,
    AWSSESVerificationStatusFailed,
    AWSSESVerificationStatusTemporaryFailure,
    AWSSESVerificationStatusNotStarted,
};

@class AWSSESAddHeaderAction;
@class AWSSESBody;
@class AWSSESBounceAction;
@class AWSSESBouncedRecipientInfo;
@class AWSSESCloneReceiptRuleSetRequest;
@class AWSSESCloneReceiptRuleSetResponse;
@class AWSSESContent;
@class AWSSESCreateReceiptFilterRequest;
@class AWSSESCreateReceiptFilterResponse;
@class AWSSESCreateReceiptRuleRequest;
@class AWSSESCreateReceiptRuleResponse;
@class AWSSESCreateReceiptRuleSetRequest;
@class AWSSESCreateReceiptRuleSetResponse;
@class AWSSESDeleteIdentityPolicyRequest;
@class AWSSESDeleteIdentityPolicyResponse;
@class AWSSESDeleteIdentityRequest;
@class AWSSESDeleteIdentityResponse;
@class AWSSESDeleteReceiptFilterRequest;
@class AWSSESDeleteReceiptFilterResponse;
@class AWSSESDeleteReceiptRuleRequest;
@class AWSSESDeleteReceiptRuleResponse;
@class AWSSESDeleteReceiptRuleSetRequest;
@class AWSSESDeleteReceiptRuleSetResponse;
@class AWSSESDeleteVerifiedEmailAddressRequest;
@class AWSSESDescribeActiveReceiptRuleSetRequest;
@class AWSSESDescribeActiveReceiptRuleSetResponse;
@class AWSSESDescribeReceiptRuleRequest;
@class AWSSESDescribeReceiptRuleResponse;
@class AWSSESDescribeReceiptRuleSetRequest;
@class AWSSESDescribeReceiptRuleSetResponse;
@class AWSSESDestination;
@class AWSSESExtensionField;
@class AWSSESGetIdentityDkimAttributesRequest;
@class AWSSESGetIdentityDkimAttributesResponse;
@class AWSSESGetIdentityMailFromDomainAttributesRequest;
@class AWSSESGetIdentityMailFromDomainAttributesResponse;
@class AWSSESGetIdentityNotificationAttributesRequest;
@class AWSSESGetIdentityNotificationAttributesResponse;
@class AWSSESGetIdentityPoliciesRequest;
@class AWSSESGetIdentityPoliciesResponse;
@class AWSSESGetIdentityVerificationAttributesRequest;
@class AWSSESGetIdentityVerificationAttributesResponse;
@class AWSSESGetSendQuotaResponse;
@class AWSSESGetSendStatisticsResponse;
@class AWSSESIdentityDkimAttributes;
@class AWSSESIdentityMailFromDomainAttributes;
@class AWSSESIdentityNotificationAttributes;
@class AWSSESIdentityVerificationAttributes;
@class AWSSESLambdaAction;
@class AWSSESListIdentitiesRequest;
@class AWSSESListIdentitiesResponse;
@class AWSSESListIdentityPoliciesRequest;
@class AWSSESListIdentityPoliciesResponse;
@class AWSSESListReceiptFiltersRequest;
@class AWSSESListReceiptFiltersResponse;
@class AWSSESListReceiptRuleSetsRequest;
@class AWSSESListReceiptRuleSetsResponse;
@class AWSSESListVerifiedEmailAddressesResponse;
@class AWSSESMessage;
@class AWSSESMessageDsn;
@class AWSSESPutIdentityPolicyRequest;
@class AWSSESPutIdentityPolicyResponse;
@class AWSSESRawMessage;
@class AWSSESReceiptAction;
@class AWSSESReceiptFilter;
@class AWSSESReceiptIpFilter;
@class AWSSESReceiptRule;
@class AWSSESReceiptRuleSetMetadata;
@class AWSSESRecipientDsnFields;
@class AWSSESReorderReceiptRuleSetRequest;
@class AWSSESReorderReceiptRuleSetResponse;
@class AWSSESS3Action;
@class AWSSESSNSAction;
@class AWSSESSendBounceRequest;
@class AWSSESSendBounceResponse;
@class AWSSESSendDataPoint;
@class AWSSESSendEmailRequest;
@class AWSSESSendEmailResponse;
@class AWSSESSendRawEmailRequest;
@class AWSSESSendRawEmailResponse;
@class AWSSESSetActiveReceiptRuleSetRequest;
@class AWSSESSetActiveReceiptRuleSetResponse;
@class AWSSESSetIdentityDkimEnabledRequest;
@class AWSSESSetIdentityDkimEnabledResponse;
@class AWSSESSetIdentityFeedbackForwardingEnabledRequest;
@class AWSSESSetIdentityFeedbackForwardingEnabledResponse;
@class AWSSESSetIdentityHeadersInNotificationsEnabledRequest;
@class AWSSESSetIdentityHeadersInNotificationsEnabledResponse;
@class AWSSESSetIdentityMailFromDomainRequest;
@class AWSSESSetIdentityMailFromDomainResponse;
@class AWSSESSetIdentityNotificationTopicRequest;
@class AWSSESSetIdentityNotificationTopicResponse;
@class AWSSESSetReceiptRulePositionRequest;
@class AWSSESSetReceiptRulePositionResponse;
@class AWSSESStopAction;
@class AWSSESUpdateReceiptRuleRequest;
@class AWSSESUpdateReceiptRuleResponse;
@class AWSSESVerifyDomainDkimRequest;
@class AWSSESVerifyDomainDkimResponse;
@class AWSSESVerifyDomainIdentityRequest;
@class AWSSESVerifyDomainIdentityResponse;
@class AWSSESVerifyEmailAddressRequest;
@class AWSSESVerifyEmailIdentityRequest;
@class AWSSESVerifyEmailIdentityResponse;
@class AWSSESWorkmailAction;

/**
 <p>When included in a receipt rule, this action adds a header to the received email.</p><p>For information about adding a header using a receipt rule, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-add-header.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [HeaderName, HeaderValue]
 */
@interface AWSSESAddHeaderAction : AWSModel


/**
 <p>The name of the header to add. Must be between 1 and 50 characters, inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes only.</p>
 */
@property (nonatomic, strong) NSString * _Nullable headerName;

/**
 <p>Must be less than 2048 characters, and must not contain newline characters ("\r" or "\n").</p>
 */
@property (nonatomic, strong) NSString * _Nullable headerValue;

@end

/**
 <p>Represents the body of the message. You can specify text, HTML, or both. If you use both, then the message should display correctly in the widest variety of email clients.</p>
 */
@interface AWSSESBody : AWSModel


/**
 <p>The content of the message, in HTML format. Use this for email clients that can process HTML. You can include clickable links, formatted text, and much more in an HTML message.</p>
 */
@property (nonatomic, strong) AWSSESContent * _Nullable html;

/**
 <p>The content of the message, in text format. Use this for text-based email clients, or clients on high-latency networks (such as mobile devices).</p>
 */
@property (nonatomic, strong) AWSSESContent * _Nullable text;

@end

/**
 <p>When included in a receipt rule, this action rejects the received email by returning a bounce response to the sender and, optionally, publishes a notification to Amazon Simple Notification Service (Amazon SNS).</p><p>For information about sending a bounce message in response to a received email, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-bounce.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [SmtpReplyCode, Message, Sender]
 */
@interface AWSSESBounceAction : AWSModel


/**
 <p>Human-readable text to include in the bounce message.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

/**
 <p>The email address of the sender of the bounced email. This is the address from which the bounce message will be sent.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sender;

/**
 <p>The SMTP reply code, as defined by <a href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable smtpReplyCode;

/**
 <p>The SMTP enhanced status code, as defined by <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusCode;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the bounce action is taken. An example of an Amazon SNS topic ARN is <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information about Amazon SNS topics, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicArn;

@end

/**
 <p>Recipient-related information to include in the Delivery Status Notification (DSN) when an email that Amazon SES receives on your behalf bounces.</p><p>For information about receiving email through Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Recipient]
 */
@interface AWSSESBouncedRecipientInfo : AWSModel


/**
 <p>The reason for the bounce. You must provide either this parameter or <code>RecipientDsnFields</code>.</p>
 */
@property (nonatomic, assign) AWSSESBounceType bounceType;

/**
 <p>The email address of the recipient of the bounced email.</p>
 */
@property (nonatomic, strong) NSString * _Nullable recipient;

/**
 <p>This parameter is used only for sending authorization. It is the ARN of the identity that is associated with the sending authorization policy that permits you to receive email for the recipient of the bounced email. For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable recipientArn;

/**
 <p>Recipient-related DSN fields, most of which would normally be filled in automatically when provided with a <code>BounceType</code>. You must provide either this parameter or <code>BounceType</code>.</p>
 */
@property (nonatomic, strong) AWSSESRecipientDsnFields * _Nullable recipientDsnFields;

@end

/**
 <p>Represents a request to create a receipt rule set by cloning an existing one. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName, OriginalRuleSetName]
 */
@interface AWSSESCloneReceiptRuleSetRequest : AWSRequest


/**
 <p>The name of the rule set to clone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable originalRuleSetName;

/**
 <p>The name of the rule set to create. The name must:</p><ul><li><p>Contain only ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes (-).</p></li><li><p>Start and end with a letter or number.</p></li><li><p>Contain less than 64 characters.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESCloneReceiptRuleSetResponse : AWSModel


@end

/**
 <p>Represents textual data, plus an optional character set specification.</p><p>By default, the text must be 7-bit ASCII, due to the constraints of the SMTP protocol. If the text must contain any other characters, then you must also specify a character set. Examples include UTF-8, ISO-8859-1, and Shift_JIS.</p>
 Required parameters: [Data]
 */
@interface AWSSESContent : AWSModel


/**
 <p>The character set of the content.</p>
 */
@property (nonatomic, strong) NSString * _Nullable charset;

/**
 <p>The textual data of the content.</p>
 */
@property (nonatomic, strong) NSString * _Nullable data;

@end

/**
 <p>Represents a request to create a new IP address filter. You use IP address filters when you receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Filter]
 */
@interface AWSSESCreateReceiptFilterRequest : AWSRequest


/**
 <p>A data structure that describes the IP address filter to create, which consists of a name, an IP address range, and whether to allow or block mail from it.</p>
 */
@property (nonatomic, strong) AWSSESReceiptFilter * _Nullable filter;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESCreateReceiptFilterResponse : AWSModel


@end

/**
 <p>Represents a request to create a receipt rule. You use receipt rules to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName, Rule]
 */
@interface AWSSESCreateReceiptRuleRequest : AWSRequest


/**
 <p>The name of an existing rule after which the new rule will be placed. If this parameter is null, the new rule will be inserted at the beginning of the rule list.</p>
 */
@property (nonatomic, strong) NSString * _Nullable after;

/**
 <p>A data structure that contains the specified rule's name, actions, recipients, domains, enabled status, scan status, and TLS policy.</p>
 */
@property (nonatomic, strong) AWSSESReceiptRule * _Nullable rule;

/**
 <p>The name of the rule set to which to add the rule.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESCreateReceiptRuleResponse : AWSModel


@end

/**
 <p>Represents a request to create an empty receipt rule set. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName]
 */
@interface AWSSESCreateReceiptRuleSetRequest : AWSRequest


/**
 <p>The name of the rule set to create. The name must:</p><ul><li><p>Contain only ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes (-).</p></li><li><p>Start and end with a letter or number.</p></li><li><p>Contain less than 64 characters.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESCreateReceiptRuleSetResponse : AWSModel


@end

/**
 <p>Represents a request to delete a sending authorization policy for an identity. Sending authorization is an Amazon SES feature that enables you to authorize other senders to use your identities. For information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity, PolicyName]
 */
@interface AWSSESDeleteIdentityPolicyRequest : AWSRequest


/**
 <p>The identity that is associated with the policy that you want to delete. You can specify the identity by using its name or by using its Amazon Resource Name (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>, <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p><p>To successfully call this API, you must own the identity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

/**
 <p>The name of the policy to be deleted.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESDeleteIdentityPolicyResponse : AWSModel


@end

/**
 <p>Represents a request to delete one of your Amazon SES identities (an email address or domain).</p>
 Required parameters: [Identity]
 */
@interface AWSSESDeleteIdentityRequest : AWSRequest


/**
 <p>The identity to be removed from the list of identities for the AWS Account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESDeleteIdentityResponse : AWSModel


@end

/**
 <p>Represents a request to delete an IP address filter. You use IP address filters when you receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [FilterName]
 */
@interface AWSSESDeleteReceiptFilterRequest : AWSRequest


/**
 <p>The name of the IP address filter to delete.</p>
 */
@property (nonatomic, strong) NSString * _Nullable filterName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESDeleteReceiptFilterResponse : AWSModel


@end

/**
 <p>Represents a request to delete a receipt rule. You use receipt rules to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName, RuleName]
 */
@interface AWSSESDeleteReceiptRuleRequest : AWSRequest


/**
 <p>The name of the receipt rule to delete.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleName;

/**
 <p>The name of the receipt rule set that contains the receipt rule to delete.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESDeleteReceiptRuleResponse : AWSModel


@end

/**
 <p>Represents a request to delete a receipt rule set and all of the receipt rules it contains. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName]
 */
@interface AWSSESDeleteReceiptRuleSetRequest : AWSRequest


/**
 <p>The name of the receipt rule set to delete.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESDeleteReceiptRuleSetResponse : AWSModel


@end

/**
 <p>Represents a request to delete an email address from the list of email addresses you have attempted to verify under your AWS account.</p>
 Required parameters: [EmailAddress]
 */
@interface AWSSESDeleteVerifiedEmailAddressRequest : AWSRequest


/**
 <p>An email address to be removed from the list of verified addresses.</p>
 */
@property (nonatomic, strong) NSString * _Nullable emailAddress;

@end

/**
 <p>Represents a request to return the metadata and receipt rules for the receipt rule set that is currently active. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 */
@interface AWSSESDescribeActiveReceiptRuleSetRequest : AWSRequest


@end

/**
 <p>Represents the metadata and receipt rules for the receipt rule set that is currently active.</p>
 */
@interface AWSSESDescribeActiveReceiptRuleSetResponse : AWSModel


/**
 <p>The metadata for the currently active receipt rule set. The metadata consists of the rule set name and a timestamp of when the rule set was created.</p>
 */
@property (nonatomic, strong) AWSSESReceiptRuleSetMetadata * _Nullable metadata;

/**
 <p>The receipt rules that belong to the active rule set.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESReceiptRule *> * _Nullable rules;

@end

/**
 <p>Represents a request to return the details of a receipt rule. You use receipt rules to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName, RuleName]
 */
@interface AWSSESDescribeReceiptRuleRequest : AWSRequest


/**
 <p>The name of the receipt rule.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleName;

/**
 <p>The name of the receipt rule set to which the receipt rule belongs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>Represents the details of a receipt rule.</p>
 */
@interface AWSSESDescribeReceiptRuleResponse : AWSModel


/**
 <p>A data structure that contains the specified receipt rule's name, actions, recipients, domains, enabled status, scan status, and Transport Layer Security (TLS) policy.</p>
 */
@property (nonatomic, strong) AWSSESReceiptRule * _Nullable rule;

@end

/**
 <p>Represents a request to return the details of a receipt rule set. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName]
 */
@interface AWSSESDescribeReceiptRuleSetRequest : AWSRequest


/**
 <p>The name of the receipt rule set to describe.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>Represents the details of the specified receipt rule set.</p>
 */
@interface AWSSESDescribeReceiptRuleSetResponse : AWSModel


/**
 <p>The metadata for the receipt rule set, which consists of the rule set name and the timestamp of when the rule set was created.</p>
 */
@property (nonatomic, strong) AWSSESReceiptRuleSetMetadata * _Nullable metadata;

/**
 <p>A list of the receipt rules that belong to the specified receipt rule set.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESReceiptRule *> * _Nullable rules;

@end

/**
 <p>Represents the destination of the message, consisting of To:, CC:, and BCC: fields.</p><p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
 */
@interface AWSSESDestination : AWSModel


/**
 <p>The BCC: field(s) of the message.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable bccAddresses;

/**
 <p>The CC: field(s) of the message.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable ccAddresses;

/**
 <p>The To: field(s) of the message.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable toAddresses;

@end

/**
 <p>Additional X-headers to include in the Delivery Status Notification (DSN) when an email that Amazon SES receives on your behalf bounces.</p><p>For information about receiving email through Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Name, Value]
 */
@interface AWSSESExtensionField : AWSModel


/**
 <p>The name of the header to add. Must be between 1 and 50 characters, inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes only.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The value of the header to add. Must be less than 2048 characters, and must not contain newline characters ("\r" or "\n").</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 <p>Represents a request for the status of Amazon SES Easy DKIM signing for an identity. For domain identities, this request also returns the DKIM tokens that are required for Easy DKIM signing, and whether Amazon SES successfully verified that these tokens were published. For more information about Easy DKIM, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identities]
 */
@interface AWSSESGetIdentityDkimAttributesRequest : AWSRequest


/**
 <p>A list of one or more verified identities - email addresses, domains, or both.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable identities;

@end

/**
 <p>Represents the status of Amazon SES Easy DKIM signing for an identity. For domain identities, this response also contains the DKIM tokens that are required for Easy DKIM signing, and whether Amazon SES successfully verified that these tokens were published.</p>
 Required parameters: [DkimAttributes]
 */
@interface AWSSESGetIdentityDkimAttributesResponse : AWSModel


/**
 <p>The DKIM attributes for an email address or a domain.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, AWSSESIdentityDkimAttributes *> * _Nullable dkimAttributes;

@end

/**
 <p>Represents a request to return the Amazon SES custom MAIL FROM attributes for a list of identities. For information about using a custom MAIL FROM domain, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identities]
 */
@interface AWSSESGetIdentityMailFromDomainAttributesRequest : AWSRequest


/**
 <p>A list of one or more identities.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable identities;

@end

/**
 <p>Represents the custom MAIL FROM attributes for a list of identities.</p>
 Required parameters: [MailFromDomainAttributes]
 */
@interface AWSSESGetIdentityMailFromDomainAttributesResponse : AWSModel


/**
 <p>A map of identities to custom MAIL FROM attributes.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, AWSSESIdentityMailFromDomainAttributes *> * _Nullable mailFromDomainAttributes;

@end

/**
 <p>Represents a request to return the notification attributes for a list of identities you verified with Amazon SES. For information about Amazon SES notifications, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identities]
 */
@interface AWSSESGetIdentityNotificationAttributesRequest : AWSRequest


/**
 <p>A list of one or more identities. You can specify an identity by using its name or by using its Amazon Resource Name (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>, <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable identities;

@end

/**
 <p>Represents the notification attributes for a list of identities.</p>
 Required parameters: [NotificationAttributes]
 */
@interface AWSSESGetIdentityNotificationAttributesResponse : AWSModel


/**
 <p>A map of Identity to IdentityNotificationAttributes.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, AWSSESIdentityNotificationAttributes *> * _Nullable notificationAttributes;

@end

/**
 <p>Represents a request to return the requested sending authorization policies for an identity. Sending authorization is an Amazon SES feature that enables you to authorize other senders to use your identities. For information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity, PolicyNames]
 */
@interface AWSSESGetIdentityPoliciesRequest : AWSRequest


/**
 <p>The identity for which the policies will be retrieved. You can specify an identity by using its name or by using its Amazon Resource Name (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>, <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p><p>To successfully call this API, you must own the identity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

/**
 <p>A list of the names of policies to be retrieved. You can retrieve a maximum of 20 policies at a time. If you do not know the names of the policies that are attached to the identity, you can use <code>ListIdentityPolicies</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable policyNames;

@end

/**
 <p>Represents the requested sending authorization policies.</p>
 Required parameters: [Policies]
 */
@interface AWSSESGetIdentityPoliciesResponse : AWSModel


/**
 <p>A map of policy names to policies.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable policies;

@end

/**
 <p>Represents a request to return the Amazon SES verification status of a list of identities. For domain identities, this request also returns the verification token. For information about verifying identities with Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identities]
 */
@interface AWSSESGetIdentityVerificationAttributesRequest : AWSRequest


/**
 <p>A list of identities.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable identities;

@end

/**
 <p>The Amazon SES verification status of a list of identities. For domain identities, this response also contains the verification token.</p>
 Required parameters: [VerificationAttributes]
 */
@interface AWSSESGetIdentityVerificationAttributesResponse : AWSModel


/**
 <p>A map of Identities to IdentityVerificationAttributes objects.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, AWSSESIdentityVerificationAttributes *> * _Nullable verificationAttributes;

@end

/**
 <p>Represents your Amazon SES daily sending quota, maximum send rate, and the number of emails you have sent in the last 24 hours.</p>
 */
@interface AWSSESGetSendQuotaResponse : AWSModel


/**
 <p>The maximum number of emails the user is allowed to send in a 24-hour interval. A value of -1 signifies an unlimited quota.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable max24HourSend;

/**
 <p>The maximum number of emails that Amazon SES can accept from the user's account per second.</p><note><p>The rate at which Amazon SES accepts the user's messages might be less than the maximum send rate.</p></note>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSendRate;

/**
 <p>The number of emails sent during the previous 24 hours.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sentLast24Hours;

@end

/**
 <p>Represents a list of data points. This list contains aggregated data from the previous two weeks of your sending activity with Amazon SES.</p>
 */
@interface AWSSESGetSendStatisticsResponse : AWSModel


/**
 <p>A list of data points, each of which represents 15 minutes of activity.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESSendDataPoint *> * _Nullable sendDataPoints;

@end

/**
 <p>Represents the DKIM attributes of a verified email address or a domain.</p>
 Required parameters: [DkimEnabled, DkimVerificationStatus]
 */
@interface AWSSESIdentityDkimAttributes : AWSModel


/**
 <p>True if DKIM signing is enabled for email sent from the identity; false otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dkimEnabled;

/**
 <p>A set of character strings that represent the domain's identity. Using these tokens, you will need to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES. Amazon Web Services will eventually detect that you have updated your DNS records; this detection process may take up to 72 hours. Upon successful detection, Amazon SES will be able to DKIM-sign email originating from that domain. (This only applies to domain identities, not email address identities.)</p><p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable dkimTokens;

/**
 <p>Describes whether Amazon SES has successfully verified the DKIM DNS records (tokens) published in the domain name's DNS. (This only applies to domain identities, not email address identities.)</p>
 */
@property (nonatomic, assign) AWSSESVerificationStatus dkimVerificationStatus;

@end

/**
 <p>Represents the custom MAIL FROM domain attributes of a verified identity (email address or domain).</p>
 Required parameters: [MailFromDomain, MailFromDomainStatus, BehaviorOnMXFailure]
 */
@interface AWSSESIdentityMailFromDomainAttributes : AWSModel


/**
 <p>The action that Amazon SES takes if it cannot successfully read the required MX record when you send an email. A value of <code>UseDefaultValue</code> indicates that if Amazon SES cannot read the required MX record, it uses amazonses.com (or a subdomain of that) as the MAIL FROM domain. A value of <code>RejectMessage</code> indicates that if Amazon SES cannot read the required MX record, Amazon SES returns a <code>MailFromDomainNotVerified</code> error and does not send the email.</p><p>The custom MAIL FROM setup states that result in this behavior are <code>Pending</code>, <code>Failed</code>, and <code>TemporaryFailure</code>.</p>
 */
@property (nonatomic, assign) AWSSESBehaviorOnMXFailure behaviorOnMXFailure;

/**
 <p>The custom MAIL FROM domain that the identity is configured to use.</p>
 */
@property (nonatomic, strong) NSString * _Nullable mailFromDomain;

/**
 <p>The state that indicates whether Amazon SES has successfully read the MX record required for custom MAIL FROM domain setup. If the state is <code>Success</code>, Amazon SES uses the specified custom MAIL FROM domain when the verified identity sends an email. All other states indicate that Amazon SES takes the action described by <code>BehaviorOnMXFailure</code>.</p>
 */
@property (nonatomic, assign) AWSSESCustomMailFromStatus mailFromDomainStatus;

@end

/**
 <p>Represents the notification attributes of an identity, including whether an identity has Amazon Simple Notification Service (Amazon SNS) topics set for bounce, complaint, and/or delivery notifications, and whether feedback forwarding is enabled for bounce and complaint notifications.</p>
 Required parameters: [BounceTopic, ComplaintTopic, DeliveryTopic, ForwardingEnabled]
 */
@interface AWSSESIdentityNotificationAttributes : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish bounce notifications.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bounceTopic;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish complaint notifications.</p>
 */
@property (nonatomic, strong) NSString * _Nullable complaintTopic;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will publish delivery notifications.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliveryTopic;

/**
 <p>Describes whether Amazon SES will forward bounce and complaint notifications as email. <code>true</code> indicates that Amazon SES will forward bounce and complaint notifications as email, while <code>false</code> indicates that bounce and complaint notifications will be published only to the specified bounce and complaint Amazon SNS topics.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable forwardingEnabled;

/**
 <p>Describes whether Amazon SES includes the original email headers in Amazon SNS notifications of type <code>Bounce</code>. A value of <code>true</code> specifies that Amazon SES will include headers in bounce notifications, and a value of <code>false</code> specifies that Amazon SES will not include headers in bounce notifications.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable headersInBounceNotificationsEnabled;

/**
 <p>Describes whether Amazon SES includes the original email headers in Amazon SNS notifications of type <code>Complaint</code>. A value of <code>true</code> specifies that Amazon SES will include headers in complaint notifications, and a value of <code>false</code> specifies that Amazon SES will not include headers in complaint notifications.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable headersInComplaintNotificationsEnabled;

/**
 <p>Describes whether Amazon SES includes the original email headers in Amazon SNS notifications of type <code>Delivery</code>. A value of <code>true</code> specifies that Amazon SES will include headers in delivery notifications, and a value of <code>false</code> specifies that Amazon SES will not include headers in delivery notifications.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable headersInDeliveryNotificationsEnabled;

@end

/**
 <p>Represents the verification attributes of a single identity.</p>
 Required parameters: [VerificationStatus]
 */
@interface AWSSESIdentityVerificationAttributes : AWSModel


/**
 <p>The verification status of the identity: "Pending", "Success", "Failed", or "TemporaryFailure".</p>
 */
@property (nonatomic, assign) AWSSESVerificationStatus verificationStatus;

/**
 <p>The verification token for a domain identity. Null for email address identities.</p>
 */
@property (nonatomic, strong) NSString * _Nullable verificationToken;

@end

/**
 <p>When included in a receipt rule, this action calls an AWS Lambda function and, optionally, publishes a notification to Amazon Simple Notification Service (Amazon SNS).</p><p>To enable Amazon SES to call your AWS Lambda function or to publish to an Amazon SNS topic of another account, Amazon SES must have permission to access those resources. For information about giving permissions, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon SES Developer Guide</a>.</p><p>For information about using AWS Lambda actions in receipt rules, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-lambda.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [FunctionArn]
 */
@interface AWSSESLambdaAction : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the AWS Lambda function. An example of an AWS Lambda function ARN is <code>arn:aws:lambda:us-west-2:account-id:function:MyFunction</code>. For more information about AWS Lambda, see the <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">AWS Lambda Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable functionArn;

/**
 <p>The invocation type of the AWS Lambda function. An invocation type of <code>RequestResponse</code> means that the execution of the function will immediately result in a response, and a value of <code>Event</code> means that the function will be invoked asynchronously. The default value is <code>Event</code>. For information about AWS Lambda invocation types, see the <a href="http://docs.aws.amazon.com/lambda/latest/dg/API_Invoke.html">AWS Lambda Developer Guide</a>.</p><important><p>There is a 30-second timeout on <code>RequestResponse</code> invocations. You should use <code>Event</code> invocation in most cases. Use <code>RequestResponse</code> only when you want to make a mail flow decision, such as whether to stop the receipt rule or the receipt rule set.</p></important>
 */
@property (nonatomic, assign) AWSSESInvocationType invocationType;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the Lambda action is taken. An example of an Amazon SNS topic ARN is <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information about Amazon SNS topics, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicArn;

@end

/**
 <p>Represents a request to return a list of all identities (email addresses and domains) that you have attempted to verify under your AWS account, regardless of verification status.</p>
 */
@interface AWSSESListIdentitiesRequest : AWSRequest


/**
 <p>The type of the identities to list. Possible values are "EmailAddress" and "Domain". If this parameter is omitted, then all identities will be listed.</p>
 */
@property (nonatomic, assign) AWSSESIdentityType identityType;

/**
 <p>The maximum number of identities per page. Possible values are 1-1000 inclusive.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxItems;

/**
 <p>The token to use for pagination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>A list of all identities that you have attempted to verify under your AWS account, regardless of verification status.</p>
 Required parameters: [Identities]
 */
@interface AWSSESListIdentitiesResponse : AWSModel


/**
 <p>A list of identities.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable identities;

/**
 <p>The token used for pagination.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Represents a request to return a list of sending authorization policies that are attached to an identity. Sending authorization is an Amazon SES feature that enables you to authorize other senders to use your identities. For information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity]
 */
@interface AWSSESListIdentityPoliciesRequest : AWSRequest


/**
 <p>The identity that is associated with the policy for which the policies will be listed. You can specify an identity by using its name or by using its Amazon Resource Name (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>, <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p><p>To successfully call this API, you must own the identity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

@end

/**
 <p>A list of names of sending authorization policies that apply to an identity.</p>
 Required parameters: [PolicyNames]
 */
@interface AWSSESListIdentityPoliciesResponse : AWSModel


/**
 <p>A list of names of policies that apply to the specified identity.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable policyNames;

@end

/**
 <p>: Represents a request to list the IP address filters that exist under your AWS account. You use IP address filters when you receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 */
@interface AWSSESListReceiptFiltersRequest : AWSRequest


@end

/**
 <p>A list of IP address filters that exist under your AWS account.</p>
 */
@interface AWSSESListReceiptFiltersResponse : AWSModel


/**
 <p>A list of IP address filter data structures, which each consist of a name, an IP address range, and whether to allow or block mail from it.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESReceiptFilter *> * _Nullable filters;

@end

/**
 <p>Represents a request to list the receipt rule sets that exist under your AWS account. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 */
@interface AWSSESListReceiptRuleSetsRequest : AWSRequest


/**
 <p>A token returned from a previous call to <code>ListReceiptRuleSets</code> to indicate the position in the receipt rule set list.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>A list of receipt rule sets that exist under your AWS account.</p>
 */
@interface AWSSESListReceiptRuleSetsResponse : AWSModel


/**
 <p>A token indicating that there are additional receipt rule sets available to be listed. Pass this token to successive calls of <code>ListReceiptRuleSets</code> to retrieve up to 100 receipt rule sets at a time.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The metadata for the currently active receipt rule set. The metadata consists of the rule set name and the timestamp of when the rule set was created.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESReceiptRuleSetMetadata *> * _Nullable ruleSets;

@end

/**
 <p>A list of email addresses that you have verified with Amazon SES under your AWS account.</p>
 */
@interface AWSSESListVerifiedEmailAddressesResponse : AWSModel


/**
 <p>A list of email addresses that have been verified.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable verifiedEmailAddresses;

@end

/**
 <p>Represents the message to be sent, composed of a subject and a body.</p>
 Required parameters: [Subject, Body]
 */
@interface AWSSESMessage : AWSModel


/**
 <p>The message body.</p>
 */
@property (nonatomic, strong) AWSSESBody * _Nullable body;

/**
 <p>The subject of the message: A short summary of the content, which will appear in the recipient's inbox.</p>
 */
@property (nonatomic, strong) AWSSESContent * _Nullable subject;

@end

/**
 <p>Message-related information to include in the Delivery Status Notification (DSN) when an email that Amazon SES receives on your behalf bounces.</p><p>For information about receiving email through Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [ReportingMta]
 */
@interface AWSSESMessageDsn : AWSModel


/**
 <p>When the message was received by the reporting mail transfer agent (MTA), in <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable arrivalDate;

/**
 <p>Additional X-headers to include in the DSN.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESExtensionField *> * _Nullable extensionFields;

/**
 <p>The reporting MTA that attempted to deliver the message, formatted as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a> (<code>mta-name-type; mta-name</code>). The default value is <code>dns; inbound-smtp.[region].amazonaws.com</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reportingMta;

@end

/**
 <p>Represents a request to add or update a sending authorization policy for an identity. Sending authorization is an Amazon SES feature that enables you to authorize other senders to use your identities. For information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity, PolicyName, Policy]
 */
@interface AWSSESPutIdentityPolicyRequest : AWSRequest


/**
 <p>The identity to which the policy will apply. You can specify an identity by using its name or by using its Amazon Resource Name (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>, <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p><p>To successfully call this API, you must own the identity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

/**
 <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p><p>For information about the syntax of sending authorization policies, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon SES Developer Guide</a>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

/**
 <p>The name of the policy.</p><p>The policy name cannot exceed 64 characters and can only include alphanumeric characters, dashes, and underscores.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESPutIdentityPolicyResponse : AWSModel


@end

/**
 <p>Represents the raw data of the message.</p>
 Required parameters: [Data]
 */
@interface AWSSESRawMessage : AWSModel


/**
 <p>The raw data of the message. The client must ensure that the message format complies with Internet email standards regarding email header fields, MIME types, MIME encoding, and base64 encoding.</p><p>The To:, CC:, and BCC: headers in the raw message can contain a group list.</p><p>If you are using <code>SendRawEmail</code> with sending authorization, you can include X-headers in the raw message to specify the "Source," "From," and "Return-Path" addresses. For more information, see the documentation for <code>SendRawEmail</code>. </p><important><p>Do not include these X-headers in the DKIM signature, because they are removed by Amazon SES before sending the email.</p></important><p>For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon SES Developer Guide</a>. </p>
 */
@property (nonatomic, strong) NSData * _Nullable data;

@end

/**
 <p>An action that Amazon SES can take when it receives an email on behalf of one or more email addresses or domains that you own. An instance of this data type can represent only one action.</p><p>For information about setting up receipt rules, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon SES Developer Guide</a>.</p>
 */
@interface AWSSESReceiptAction : AWSModel


/**
 <p>Adds a header to the received email.</p>
 */
@property (nonatomic, strong) AWSSESAddHeaderAction * _Nullable addHeaderAction;

/**
 <p>Rejects the received email by returning a bounce response to the sender and, optionally, publishes a notification to Amazon Simple Notification Service (Amazon SNS).</p>
 */
@property (nonatomic, strong) AWSSESBounceAction * _Nullable bounceAction;

/**
 <p>Calls an AWS Lambda function, and optionally, publishes a notification to Amazon SNS.</p>
 */
@property (nonatomic, strong) AWSSESLambdaAction * _Nullable lambdaAction;

/**
 <p>Saves the received message to an Amazon Simple Storage Service (Amazon S3) bucket and, optionally, publishes a notification to Amazon SNS.</p>
 */
@property (nonatomic, strong) AWSSESS3Action * _Nullable s3Action;

/**
 <p>Publishes the email content within a notification to Amazon SNS.</p>
 */
@property (nonatomic, strong) AWSSESSNSAction * _Nullable SNSAction;

/**
 <p>Terminates the evaluation of the receipt rule set and optionally publishes a notification to Amazon SNS.</p>
 */
@property (nonatomic, strong) AWSSESStopAction * _Nullable stopAction;

/**
 <p>Calls Amazon WorkMail and, optionally, publishes a notification to Amazon SNS.</p>
 */
@property (nonatomic, strong) AWSSESWorkmailAction * _Nullable workmailAction;

@end

/**
 <p>A receipt IP address filter enables you to specify whether to accept or reject mail originating from an IP address or range of IP addresses.</p><p>For information about setting up IP address filters, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Name, IpFilter]
 */
@interface AWSSESReceiptFilter : AWSModel


/**
 <p>A structure that provides the IP addresses to block or allow, and whether to block or allow incoming mail from them.</p>
 */
@property (nonatomic, strong) AWSSESReceiptIpFilter * _Nullable ipFilter;

/**
 <p>The name of the IP address filter. The name must:</p><ul><li><p>Contain only ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes (-).</p></li><li><p>Start and end with a letter or number.</p></li><li><p>Contain less than 64 characters.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 <p>A receipt IP address filter enables you to specify whether to accept or reject mail originating from an IP address or range of IP addresses.</p><p>For information about setting up IP address filters, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Policy, Cidr]
 */
@interface AWSSESReceiptIpFilter : AWSModel


/**
 <p>A single IP address or a range of IP addresses that you want to block or allow, specified in Classless Inter-Domain Routing (CIDR) notation. An example of a single email address is 10.0.0.1. An example of a range of IP addresses is 10.0.0.1/24. For more information about CIDR notation, see <a href="https://tools.ietf.org/html/rfc2317">RFC 2317</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidr;

/**
 <p>Indicates whether to block or allow incoming mail from the specified IP addresses.</p>
 */
@property (nonatomic, assign) AWSSESReceiptFilterPolicy policy;

@end

/**
 <p>Receipt rules enable you to specify which actions Amazon SES should take when it receives mail on behalf of one or more email addresses or domains that you own.</p><p>Each receipt rule defines a set of email addresses or domains to which it applies. If the email addresses or domains match at least one recipient address of the message, Amazon SES executes all of the receipt rule's actions on the message.</p><p>For information about setting up receipt rules, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Name]
 */
@interface AWSSESReceiptRule : AWSModel


/**
 <p>An ordered list of actions to perform on messages that match at least one of the recipient email addresses or domains specified in the receipt rule.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESReceiptAction *> * _Nullable actions;

/**
 <p>If <code>true</code>, the receipt rule is active. The default value is <code>false</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>The name of the receipt rule. The name must:</p><ul><li><p>Contain only ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes (-).</p></li><li><p>Start and end with a letter or number.</p></li><li><p>Contain less than 64 characters.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The recipient domains and email addresses to which the receipt rule applies. If this field is not specified, this rule will match all recipients under all verified domains.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable recipients;

/**
 <p>If <code>true</code>, then messages to which this receipt rule applies are scanned for spam and viruses. The default value is <code>false</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable scanEnabled;

/**
 <p>Specifies whether Amazon SES should require that incoming email is delivered over a connection encrypted with Transport Layer Security (TLS). If this parameter is set to <code>Require</code>, Amazon SES will bounce emails that are not received over TLS. The default is <code>Optional</code>.</p>
 */
@property (nonatomic, assign) AWSSESTlsPolicy tlsPolicy;

@end

/**
 <p>Information about a receipt rule set.</p><p>A receipt rule set is a collection of rules that specify what Amazon SES should do with mail it receives on behalf of your account's verified domains.</p><p>For information about setting up receipt rule sets, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon SES Developer Guide</a>.</p>
 */
@interface AWSSESReceiptRuleSetMetadata : AWSModel


/**
 <p>The date and time the receipt rule set was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createdTimestamp;

/**
 <p>The name of the receipt rule set. The name must:</p><ul><li><p>Contain only ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes (-).</p></li><li><p>Start and end with a letter or number.</p></li><li><p>Contain less than 64 characters.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 <p>Recipient-related information to include in the Delivery Status Notification (DSN) when an email that Amazon SES receives on your behalf bounces.</p><p>For information about receiving email through Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Action, Status]
 */
@interface AWSSESRecipientDsnFields : AWSModel


/**
 <p>The action performed by the reporting mail transfer agent (MTA) as a result of its attempt to deliver the message to the recipient address. This is required by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
 */
@property (nonatomic, assign) AWSSESDsnAction action;

/**
 <p>An extended explanation of what went wrong; this is usually an SMTP response. See <a href="https://tools.ietf.org/html/rfc3463">RFC 3463</a> for the correct formatting of this parameter.</p>
 */
@property (nonatomic, strong) NSString * _Nullable diagnosticCode;

/**
 <p>Additional X-headers to include in the DSN.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESExtensionField *> * _Nullable extensionFields;

/**
 <p>The email address to which the message was ultimately delivered. This corresponds to the <code>Final-Recipient</code> in the DSN. If not specified, <code>FinalRecipient</code> will be set to the <code>Recipient</code> specified in the <code>BouncedRecipientInfo</code> structure. Either <code>FinalRecipient</code> or the recipient in <code>BouncedRecipientInfo</code> must be a recipient of the original bounced message.</p><note><p>Do not prepend the <code>FinalRecipient</code> email address with <code>rfc 822;</code>, as described in <a href="https://tools.ietf.org/html/rfc3798">RFC 3798</a>.</p></note>
 */
@property (nonatomic, strong) NSString * _Nullable finalRecipient;

/**
 <p>The time the final delivery attempt was made, in <a href="https://www.ietf.org/rfc/rfc0822.txt">RFC 822</a> date-time format.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable lastAttemptDate;

/**
 <p>The MTA to which the remote MTA attempted to deliver the message, formatted as specified in <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a> (<code>mta-name-type; mta-name</code>). This parameter typically applies only to propagating synchronous bounces.</p>
 */
@property (nonatomic, strong) NSString * _Nullable remoteMta;

/**
 <p>The status code that indicates what went wrong. This is required by <a href="https://tools.ietf.org/html/rfc3464">RFC 3464</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

@end

/**
 <p>Represents a request to reorder the receipt rules within a receipt rule set. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName, RuleNames]
 */
@interface AWSSESReorderReceiptRuleSetRequest : AWSRequest


/**
 <p>A list of the specified receipt rule set's receipt rules in the order that you want to put them.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable ruleNames;

/**
 <p>The name of the receipt rule set to reorder.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESReorderReceiptRuleSetResponse : AWSModel


@end

/**
 <p>When included in a receipt rule, this action saves the received message to an Amazon Simple Storage Service (Amazon S3) bucket and, optionally, publishes a notification to Amazon Simple Notification Service (Amazon SNS).</p><p>To enable Amazon SES to write emails to your Amazon S3 bucket, use an AWS KMS key to encrypt your emails, or publish to an Amazon SNS topic of another account, Amazon SES must have permission to access those resources. For information about giving permissions, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon SES Developer Guide</a>.</p><note><p>When you save your emails to an Amazon S3 bucket, the maximum email size (including headers) is 30 MB. Emails larger than that will bounce.</p></note><p>For information about specifying Amazon S3 actions in receipt rules, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-s3.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [BucketName]
 */
@interface AWSSESS3Action : AWSModel


/**
 <p>The name of the Amazon S3 bucket to which to save the received email.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucketName;

/**
 <p>The customer master key that Amazon SES should use to encrypt your emails before saving them to the Amazon S3 bucket. You can use the default master key or a custom master key you created in AWS KMS as follows:</p><ul><li><p>To use the default master key, provide an ARN in the form of <code>arn:aws:kms:REGION:ACCOUNT-ID-WITHOUT-HYPHENS:alias/aws/ses</code>. For example, if your AWS account ID is 123456789012 and you want to use the default master key in the US West (Oregon) region, the ARN of the default master key would be <code>arn:aws:kms:us-west-2:123456789012:alias/aws/ses</code>. If you use the default master key, you don't need to perform any extra steps to give Amazon SES permission to use the key.</p></li><li><p>To use a custom master key you created in AWS KMS, provide the ARN of the master key and ensure that you add a statement to your key's policy to give Amazon SES permission to use it. For more information about giving permissions, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon SES Developer Guide</a>.</p></li></ul><p>For more information about key policies, see the <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS KMS Developer Guide</a>. If you do not specify a master key, Amazon SES will not encrypt your emails.</p><important><p>Your mail is encrypted by Amazon SES using the Amazon S3 encryption client before the mail is submitted to Amazon S3 for storage. It is not encrypted using Amazon S3 server-side encryption. This means that you must use the Amazon S3 encryption client to decrypt the email after retrieving it from Amazon S3, as the service has no access to use your AWS KMS keys for decryption. This encryption client is currently available with the <a href="http://aws.amazon.com/sdk-for-java/">AWS Java SDK</a> and <a href="http://aws.amazon.com/sdk-for-ruby/">AWS Ruby SDK</a> only. For more information about client-side encryption using AWS KMS master keys, see the <a href="http://alpha-docs-aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon S3 Developer Guide</a>.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyArn;

/**
 <p>The key prefix of the Amazon S3 bucket. The key prefix is similar to a directory name that enables you to store similar data under the same directory in a bucket.</p>
 */
@property (nonatomic, strong) NSString * _Nullable objectKeyPrefix;

/**
 <p>The ARN of the Amazon SNS topic to notify when the message is saved to the Amazon S3 bucket. An example of an Amazon SNS topic ARN is <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information about Amazon SNS topics, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicArn;

@end

/**
 <p>When included in a receipt rule, this action publishes a notification to Amazon Simple Notification Service (Amazon SNS). This action includes a complete copy of the email content in the Amazon SNS notifications. Amazon SNS notifications for all other actions simply provide information about the email. They do not include the email content itself.</p><p>If you own the Amazon SNS topic, you don't need to do anything to give Amazon SES permission to publish emails to it. However, if you don't own the Amazon SNS topic, you need to attach a policy to the topic to give Amazon SES permissions to access it. For information about giving permissions, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon SES Developer Guide</a>.</p><important><p>You can only publish emails that are 150 KB or less (including the header) to Amazon SNS. Larger emails will bounce. If you anticipate emails larger than 150 KB, use the S3 action instead.</p></important><p>For information about using a receipt rule to publish an Amazon SNS notification, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-sns.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [TopicArn]
 */
@interface AWSSESSNSAction : AWSModel


/**
 <p>The encoding to use for the email within the Amazon SNS notification. UTF-8 is easier to use, but may not preserve all special characters when a message was encoded with a different encoding format. Base64 preserves all special characters. The default value is UTF-8.</p>
 */
@property (nonatomic, assign) AWSSESSNSActionEncoding encoding;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify. An example of an Amazon SNS topic ARN is <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information about Amazon SNS topics, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicArn;

@end

/**
 <p>Represents a request to send a bounce message to the sender of an email you received through Amazon SES.</p>
 Required parameters: [OriginalMessageId, BounceSender, BouncedRecipientInfoList]
 */
@interface AWSSESSendBounceRequest : AWSRequest


/**
 <p>The address to use in the "From" header of the bounce message. This must be an identity that you have verified with Amazon SES.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bounceSender;

/**
 <p>This parameter is used only for sending authorization. It is the ARN of the identity that is associated with the sending authorization policy that permits you to use the address in the "From" header of the bounce. For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bounceSenderArn;

/**
 <p>A list of recipients of the bounced message, including the information required to create the Delivery Status Notifications (DSNs) for the recipients. You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
 */
@property (nonatomic, strong) NSArray<AWSSESBouncedRecipientInfo *> * _Nullable bouncedRecipientInfoList;

/**
 <p>Human-readable text for the bounce message to explain the failure. If not specified, the text will be auto-generated based on the bounced recipient information.</p>
 */
@property (nonatomic, strong) NSString * _Nullable explanation;

/**
 <p>Message-related DSN fields. If not specified, Amazon SES will choose the values.</p>
 */
@property (nonatomic, strong) AWSSESMessageDsn * _Nullable messageDsn;

/**
 <p>The message ID of the message to be bounced.</p>
 */
@property (nonatomic, strong) NSString * _Nullable originalMessageId;

@end

/**
 <p>Represents a unique message ID.</p>
 */
@interface AWSSESSendBounceResponse : AWSModel


/**
 <p>The message ID of the bounce message.</p>
 */
@property (nonatomic, strong) NSString * _Nullable messageId;

@end

/**
 <p>Represents sending statistics data. Each <code>SendDataPoint</code> contains statistics for a 15-minute period of sending activity. </p>
 */
@interface AWSSESSendDataPoint : AWSModel


/**
 <p>Number of emails that have bounced.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bounces;

/**
 <p>Number of unwanted emails that were rejected by recipients.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable complaints;

/**
 <p>Number of emails that have been enqueued for sending.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deliveryAttempts;

/**
 <p>Number of emails rejected by Amazon SES.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable rejects;

/**
 <p>Time of the data point.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable timestamp;

@end

/**
 <p>Represents a request to send a single formatted email using Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-formatted.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Source, Destination, Message]
 */
@interface AWSSESSendEmailRequest : AWSRequest


/**
 <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
 */
@property (nonatomic, strong) AWSSESDestination * _Nullable destination;

/**
 <p>The message to be sent.</p>
 */
@property (nonatomic, strong) AWSSESMessage * _Nullable message;

/**
 <p>The reply-to email address(es) for the message. If the recipient replies to the message, each reply-to address will receive the reply.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable replyToAddresses;

/**
 <p>The email address to which bounces and complaints are to be forwarded when feedback forwarding is enabled. If the message cannot be delivered to the recipient, then an error message will be returned from the recipient's ISP; this message will then be forwarded to the email address specified by the <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is never overwritten. This email address must be either individually verified with Amazon SES, or from a domain that has been verified with Amazon SES. </p>
 */
@property (nonatomic, strong) NSString * _Nullable returnPath;

/**
 <p>This parameter is used only for sending authorization. It is the ARN of the identity that is associated with the sending authorization policy that permits you to use the email address specified in the <code>ReturnPath</code> parameter.</p><p>For example, if the owner of <code>example.com</code> (which has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>) attaches a policy to it that authorizes you to use <code>feedback@example.com</code>, then you would specify the <code>ReturnPathArn</code> to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p><p>For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable returnPathArn;

/**
 <p>The email address that is sending the email. This email address must be either individually verified with Amazon SES, or from a domain that has been verified with Amazon SES. For information about verifying identities, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</p><p>If you are sending on behalf of another user and have been permitted to do so by a sending authorization policy, then you must also specify the <code>SourceArn</code> parameter. For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p><p> In all cases, the email address must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable source;

/**
 <p>This parameter is used only for sending authorization. It is the ARN of the identity that is associated with the sending authorization policy that permits you to send for the email address specified in the <code>Source</code> parameter.</p><p>For example, if the owner of <code>example.com</code> (which has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>) attaches a policy to it that authorizes you to send from <code>user@example.com</code>, then you would specify the <code>SourceArn</code> to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the <code>Source</code> to be <code>user@example.com</code>.</p><p>For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceArn;

@end

/**
 <p>Represents a unique message ID.</p>
 Required parameters: [MessageId]
 */
@interface AWSSESSendEmailResponse : AWSModel


/**
 <p>The unique message identifier returned from the <code>SendEmail</code> action. </p>
 */
@property (nonatomic, strong) NSString * _Nullable messageId;

@end

/**
 <p>Represents a request to send a single raw email using Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RawMessage]
 */
@interface AWSSESSendRawEmailRequest : AWSRequest


/**
 <p>A list of destinations for the message, consisting of To:, CC:, and BCC: addresses.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable destinations;

/**
 <p>This parameter is used only for sending authorization. It is the ARN of the identity that is associated with the sending authorization policy that permits you to specify a particular "From" address in the header of the raw email.</p><p>Instead of using this parameter, you can use the X-header <code>X-SES-FROM-ARN</code> in the raw message of the email. If you use both the <code>FromArn</code> parameter and the corresponding X-header, Amazon SES uses the value of the <code>FromArn</code> parameter.</p><note><p>For information about when to use this parameter, see the description of <code>SendRawEmail</code> in this guide, or see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon SES Developer Guide</a>.</p></note>
 */
@property (nonatomic, strong) NSString * _Nullable fromArn;

/**
 <p>The raw text of the message. The client is responsible for ensuring the following:</p><ul><li><p>Message must contain a header and a body, separated by a blank line.</p></li><li><p>All required header fields must be present.</p></li><li><p>Each part of a multipart MIME message must be formatted properly.</p></li><li><p>MIME content types must be among those supported by Amazon SES. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon SES Developer Guide</a>.</p></li><li><p>Must be base64-encoded.</p></li></ul>
 */
@property (nonatomic, strong) AWSSESRawMessage * _Nullable rawMessage;

/**
 <p>This parameter is used only for sending authorization. It is the ARN of the identity that is associated with the sending authorization policy that permits you to use the email address specified in the <code>ReturnPath</code> parameter.</p><p>For example, if the owner of <code>example.com</code> (which has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>) attaches a policy to it that authorizes you to use <code>feedback@example.com</code>, then you would specify the <code>ReturnPathArn</code> to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p><p>Instead of using this parameter, you can use the X-header <code>X-SES-RETURN-PATH-ARN</code> in the raw message of the email. If you use both the <code>ReturnPathArn</code> parameter and the corresponding X-header, Amazon SES uses the value of the <code>ReturnPathArn</code> parameter.</p><note><p>For information about when to use this parameter, see the description of <code>SendRawEmail</code> in this guide, or see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon SES Developer Guide</a>.</p></note>
 */
@property (nonatomic, strong) NSString * _Nullable returnPathArn;

/**
 <p>The identity's email address. If you do not provide a value for this parameter, you must specify a "From" address in the raw text of the message. (You can also specify both.)</p><p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p><note><p>If you specify the <code>Source</code> parameter and have feedback forwarding enabled, then bounces and complaints will be sent to this email address. This takes precedence over any <i>Return-Path</i> header that you might include in the raw text of the message.</p></note>
 */
@property (nonatomic, strong) NSString * _Nullable source;

/**
 <p>This parameter is used only for sending authorization. It is the ARN of the identity that is associated with the sending authorization policy that permits you to send for the email address specified in the <code>Source</code> parameter.</p><p>For example, if the owner of <code>example.com</code> (which has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>) attaches a policy to it that authorizes you to send from <code>user@example.com</code>, then you would specify the <code>SourceArn</code> to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the <code>Source</code> to be <code>user@example.com</code>.</p><p>Instead of using this parameter, you can use the X-header <code>X-SES-SOURCE-ARN</code> in the raw message of the email. If you use both the <code>SourceArn</code> parameter and the corresponding X-header, Amazon SES uses the value of the <code>SourceArn</code> parameter.</p><note><p>For information about when to use this parameter, see the description of <code>SendRawEmail</code> in this guide, or see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-delegate-sender-tasks-email.html">Amazon SES Developer Guide</a>.</p></note>
 */
@property (nonatomic, strong) NSString * _Nullable sourceArn;

@end

/**
 <p>Represents a unique message ID.</p>
 Required parameters: [MessageId]
 */
@interface AWSSESSendRawEmailResponse : AWSModel


/**
 <p>The unique message identifier returned from the <code>SendRawEmail</code> action. </p>
 */
@property (nonatomic, strong) NSString * _Nullable messageId;

@end

/**
 <p>Represents a request to set a receipt rule set as the active receipt rule set. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 */
@interface AWSSESSetActiveReceiptRuleSetRequest : AWSRequest


/**
 <p>The name of the receipt rule set to make active. Setting this value to null disables all email receiving.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESSetActiveReceiptRuleSetResponse : AWSModel


@end

/**
 <p>Represents a request to enable or disable Amazon SES Easy DKIM signing for an identity. For more information about setting up Easy DKIM, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity, DkimEnabled]
 */
@interface AWSSESSetIdentityDkimEnabledRequest : AWSRequest


/**
 <p>Sets whether DKIM signing is enabled for an identity. Set to <code>true</code> to enable DKIM signing for this identity; <code>false</code> to disable it. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dkimEnabled;

/**
 <p>The identity for which DKIM signing should be enabled or disabled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESSetIdentityDkimEnabledResponse : AWSModel


@end

/**
 <p>Represents a request to enable or disable whether Amazon SES forwards you bounce and complaint notifications through email. For information about email feedback forwarding, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications-via-email.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity, ForwardingEnabled]
 */
@interface AWSSESSetIdentityFeedbackForwardingEnabledRequest : AWSRequest


/**
 <p>Sets whether Amazon SES will forward bounce and complaint notifications as email. <code>true</code> specifies that Amazon SES will forward bounce and complaint notifications as email, in addition to any Amazon SNS topic publishing otherwise specified. <code>false</code> specifies that Amazon SES will publish bounce and complaint notifications only through Amazon SNS. This value can only be set to <code>false</code> when Amazon SNS topics are set for both <code>Bounce</code> and <code>Complaint</code> notification types.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable forwardingEnabled;

/**
 <p>The identity for which to set bounce and complaint notification forwarding. Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESSetIdentityFeedbackForwardingEnabledResponse : AWSModel


@end

/**
 <p>Represents a request to set whether Amazon SES includes the original email headers in the Amazon SNS notifications of a specified type. For information about notifications, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications-via-sns.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity, NotificationType, Enabled]
 */
@interface AWSSESSetIdentityHeadersInNotificationsEnabledRequest : AWSRequest


/**
 <p>Sets whether Amazon SES includes the original email headers in Amazon SNS notifications of the specified notification type. A value of <code>true</code> specifies that Amazon SES will include headers in notifications, and a value of <code>false</code> specifies that Amazon SES will not include headers in notifications.</p><p>This value can only be set when <code>NotificationType</code> is already set to use a particular Amazon SNS topic.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>The identity for which to enable or disable headers in notifications. Examples: <code>user@example.com</code>, <code>example.com</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

/**
 <p>The notification type for which to enable or disable headers in notifications. </p>
 */
@property (nonatomic, assign) AWSSESNotificationType notificationType;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESSetIdentityHeadersInNotificationsEnabledResponse : AWSModel


@end

/**
 <p>Represents a request to enable or disable the Amazon SES custom MAIL FROM domain setup for a verified identity. For information about using a custom MAIL FROM domain, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity]
 */
@interface AWSSESSetIdentityMailFromDomainRequest : AWSRequest


/**
 <p>The action that you want Amazon SES to take if it cannot successfully read the required MX record when you send an email. If you choose <code>UseDefaultValue</code>, Amazon SES will use amazonses.com (or a subdomain of that) as the MAIL FROM domain. If you choose <code>RejectMessage</code>, Amazon SES will return a <code>MailFromDomainNotVerified</code> error and not send the email.</p><p>The action specified in <code>BehaviorOnMXFailure</code> is taken when the custom MAIL FROM domain setup is in the <code>Pending</code>, <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
 */
@property (nonatomic, assign) AWSSESBehaviorOnMXFailure behaviorOnMXFailure;

/**
 <p>The verified identity for which you want to enable or disable the specified custom MAIL FROM domain.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

/**
 <p>The custom MAIL FROM domain that you want the verified identity to use. The MAIL FROM domain must 1) be a subdomain of the verified identity, 2) not be used in a "From" address if the MAIL FROM domain is the destination of email feedback forwarding (for more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from.html">Amazon SES Developer Guide</a>), and 3) not be used to receive emails. A value of <code>null</code> disables the custom MAIL FROM setting for the identity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable mailFromDomain;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESSetIdentityMailFromDomainResponse : AWSModel


@end

/**
 <p>Represents a request to specify the Amazon SNS topic to which Amazon SES will publish bounce, complaint, or delivery notifications for emails sent with that identity as the Source. For information about Amazon SES notifications, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications-via-sns.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Identity, NotificationType]
 */
@interface AWSSESSetIdentityNotificationTopicRequest : AWSRequest


/**
 <p>The identity for which the Amazon SNS topic will be set. You can specify an identity by using its name or by using its Amazon Resource Name (ARN). Examples: <code>user@example.com</code>, <code>example.com</code>, <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identity;

/**
 <p>The type of notifications that will be published to the specified Amazon SNS topic.</p>
 */
@property (nonatomic, assign) AWSSESNotificationType notificationType;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic. If the parameter is omitted from the request or a null value is passed, <code>SnsTopic</code> is cleared and publishing is disabled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snsTopic;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESSetIdentityNotificationTopicResponse : AWSModel


@end

/**
 <p>Represents a request to set the position of a receipt rule in a receipt rule set. You use receipt rule sets to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName, RuleName]
 */
@interface AWSSESSetReceiptRulePositionRequest : AWSRequest


/**
 <p>The name of the receipt rule after which to place the specified receipt rule.</p>
 */
@property (nonatomic, strong) NSString * _Nullable after;

/**
 <p>The name of the receipt rule to reposition.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleName;

/**
 <p>The name of the receipt rule set that contains the receipt rule to reposition.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESSetReceiptRulePositionResponse : AWSModel


@end

/**
 <p>When included in a receipt rule, this action terminates the evaluation of the receipt rule set and, optionally, publishes a notification to Amazon Simple Notification Service (Amazon SNS).</p><p>For information about setting a stop action in a receipt rule, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-stop.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Scope]
 */
@interface AWSSESStopAction : AWSModel


/**
 <p>The scope to which the Stop action applies. That is, what is being stopped.</p>
 */
@property (nonatomic, assign) AWSSESStopScope scope;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the stop action is taken. An example of an Amazon SNS topic ARN is <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information about Amazon SNS topics, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicArn;

@end

/**
 <p>Represents a request to update a receipt rule. You use receipt rules to receive email with Amazon SES. For more information, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [RuleSetName, Rule]
 */
@interface AWSSESUpdateReceiptRuleRequest : AWSRequest


/**
 <p>A data structure that contains the updated receipt rule information.</p>
 */
@property (nonatomic, strong) AWSSESReceiptRule * _Nullable rule;

/**
 <p>The name of the receipt rule set to which the receipt rule belongs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ruleSetName;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESUpdateReceiptRuleResponse : AWSModel


@end

/**
 <p>Represents a request to generate the CNAME records needed to set up Easy DKIM with Amazon SES. For more information about setting up Easy DKIM, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Domain]
 */
@interface AWSSESVerifyDomainDkimRequest : AWSRequest


/**
 <p>The name of the domain to be verified for Easy DKIM signing.</p>
 */
@property (nonatomic, strong) NSString * _Nullable domain;

@end

/**
 <p>Returns CNAME records that you must publish to the DNS server of your domain to set up Easy DKIM with Amazon SES.</p>
 Required parameters: [DkimTokens]
 */
@interface AWSSESVerifyDomainDkimResponse : AWSModel


/**
 <p>A set of character strings that represent the domain's identity. If the identity is an email address, the tokens represent the domain of that address.</p><p>Using these tokens, you will need to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES. Amazon Web Services will eventually detect that you have updated your DNS records; this detection process may take up to 72 hours. Upon successful detection, Amazon SES will be able to DKIM-sign emails originating from that domain.</p><p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable dkimTokens;

@end

/**
 <p>Represents a request to begin Amazon SES domain verification and to generate the TXT records that you must publish to the DNS server of your domain to complete the verification. For information about domain verification, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-domains.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [Domain]
 */
@interface AWSSESVerifyDomainIdentityRequest : AWSRequest


/**
 <p>The domain to be verified.</p>
 */
@property (nonatomic, strong) NSString * _Nullable domain;

@end

/**
 <p>Returns a TXT record that you must publish to the DNS server of your domain to complete domain verification with Amazon SES.</p>
 Required parameters: [VerificationToken]
 */
@interface AWSSESVerifyDomainIdentityResponse : AWSModel


/**
 <p>A TXT record that must be placed in the DNS settings for the domain, in order to complete domain verification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable verificationToken;

@end

/**
 <p>Represents a request to begin email address verification with Amazon SES. For information about email address verification, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [EmailAddress]
 */
@interface AWSSESVerifyEmailAddressRequest : AWSRequest


/**
 <p>The email address to be verified.</p>
 */
@property (nonatomic, strong) NSString * _Nullable emailAddress;

@end

/**
 <p>Represents a request to begin email address verification with Amazon SES. For information about email address verification, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [EmailAddress]
 */
@interface AWSSESVerifyEmailIdentityRequest : AWSRequest


/**
 <p>The email address to be verified.</p>
 */
@property (nonatomic, strong) NSString * _Nullable emailAddress;

@end

/**
 <p>An empty element returned on a successful request.</p>
 */
@interface AWSSESVerifyEmailIdentityResponse : AWSModel


@end

/**
 <p>When included in a receipt rule, this action calls Amazon WorkMail and, optionally, publishes a notification to Amazon Simple Notification Service (Amazon SNS). You will typically not use this action directly because Amazon WorkMail adds the rule automatically during its setup procedure.</p><p>For information using a receipt rule to call Amazon WorkMail, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-workmail.html">Amazon SES Developer Guide</a>.</p>
 Required parameters: [OrganizationArn]
 */
@interface AWSSESWorkmailAction : AWSModel


/**
 <p>The ARN of the Amazon WorkMail organization. An example of an Amazon WorkMail organization ARN is <code>arn:aws:workmail:us-west-2:123456789012:organization/m-68755160c4cb4e29a2b2f8fb58f359d7</code>. For information about Amazon WorkMail organizations, see the <a href="http://docs.aws.amazon.com/workmail/latest/adminguide/organizations_overview.html">Amazon WorkMail Administrator Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable organizationArn;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to notify when the WorkMail action is called. An example of an Amazon SNS topic ARN is <code>arn:aws:sns:us-west-2:123456789012:MyTopic</code>. For more information about Amazon SNS topics, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS Developer Guide</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicArn;

@end

NS_ASSUME_NONNULL_END
