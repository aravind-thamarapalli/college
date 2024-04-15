from transformers import GPT2LMHeadModel, GPT2Tokenizer

# Initialize the GPT2 tokenizer and model
tokenizer = GPT2Tokenizer.from_pretrained("gpt2")
model = GPT2LMHeadModel.from_pretrained("gpt2")

# Define your prompt text
prompt_text = "Once upon a time"

# Encode the prompt text and return torch.Tensor
inputs = tokenizer.encode(prompt_text, return_tensors="pt")

# Generate text
outputs = model.generate(inputs, max_length=500, do_sample=True, temperature=0.7)

# Decode the output and print the generated text
generated_text = tokenizer.decode(outputs[0])
print(generated_text)
